import subprocess
import os
import time
import re
import pdb

import threading
from os import kill
from signal import alarm, signal, SIGALRM, SIGKILL
from subprocess import PIPE, Popen

def run(args, cwd = None, shell = False, kill_tree = True, timeout = -1, env = None):
    '''
    Run a command with a timeout after which it will be forcibly
    killed.
    '''
    class Alarm(Exception):
        pass
    def alarm_handler(signum, frame):
        raise Alarm
    p = Popen(args, shell = shell, cwd = cwd, stdout = PIPE, stderr = PIPE, env = env)
    if timeout != -1:
        signal(SIGALRM, alarm_handler)
        alarm(timeout)
    try:
        stdout, stderr = p.communicate()
        if timeout != -1:
            alarm(0)
    except Alarm:
        pids = [p.pid]
        if kill_tree:
            pids.extend(get_process_children(p.pid))
        for pid in pids:
            # process might have died before getting to this line
            # so wrap to avoid OSError: no such process
            try: 
                kill(pid, SIGKILL)
            except OSError:
                pass
        return -9, '', ''
    return p.returncode, stdout, stderr

def get_process_children(pid):
    p = Popen('ps --no-headers -o pid --ppid %d' % pid, shell = True,
              stdout = PIPE, stderr = PIPE)
    stdout, stderr = p.communicate()
    return [int(p) for p in stdout.split()]


def runFileThroughCrestAndGetStats(cFile):
	cFile = 'testfile_2_3_10_1_1011.c'
	crestc_command = os.path.join(crestDir, "bin/crestc") + ' ' + os.path.join(testDir,cFile)
	crestc_output = run(crestc_command, shell=True, timeout = 3)[2]

	start = time.time()
	exportZ3LibCmd = 'export LD_LIBRARY_PATH=./crest-z3-master/z3/lib'
	run_crest_command = exportZ3LibCmd + ' && ' + os.path.join(crestDir, "bin/run_crest") + ' ' + os.path.join(testDir,cFile[ :len(cFile)-2]) + ' 10 -dfs'

	print cFile
	run_crest_output = run(run_crest_command, shell=True, timeout=40)
	ifOutput = run_crest_output[1]
	iterationOutput = run_crest_output[2]
	print ifOutput
	print iterationOutput
	
	end = time.time()
	
	results =  parseCrestOutput(crestc_output, run_crest_output)
	metrics = {}
	metrics["timing"] = end - start
	metrics["coverage"] = results
	return metrics

#TODO
#get the coverage ratio of each test case
def parseCrestOutput(crestc_output,run_crest_output):
	temp = re.findall(r'\w+\sbranches',crestc_output)
	tks = temp[0].split(" ")
	branches = tks[0]
	covereds = re.findall(r'covered\s\d+',run_crest_output)
	maxBranch = 0
	#print covereds
	for covered in covereds:
		maxBranch = max(maxBranch, int(covered[8:]))
	ratio = float(maxBranch)/float(branches)
	return ratio


table_depth = {} #table by depth to store the total time

#aggregated timing and coverage for each depth 
def aggregatedByDepth(depth, timing, coverage):
	if depth not in table_depth:
		table_depth[depth] = [timing, coverage, 1]
	else:
		table_depth[depth][0] += timing
		table_depth[depth][1] += coverage
		table_depth[depth][2] += 1

#aggregated timing and coverage for each nvar
table_nvar = {}
def aggregatedByNvar(nvar, timing, coverage):
	if nvar not in table_nvar:
		table_nvar[nvar] = [timing, coverage, 1]
	else:
		table_nvar[nvar][0] += timing
		table_nvar[nvar][1] += coverage
		table_nvar[nvar][2] += 1


#get the average run time and coverage for each depth
def getAverageNvar():
	f = open("result_nvar.txt", "w")
	f.write("nvars\ttime\tcoverage\n")
	for key in table_nvar:
		timing = table_nvar[key][0]
		num_file = table_nvar[key][2]
		coverage = table_nvar[key][1]
		average_timing = timing/num_file
		average_coverage = coverage/num_file
		line = str(key) +'\t'+str(average_timing)+'\t'+str(average_coverage)+'\n'
		f.write(line)
	f.close()


#get the average run time and coverage for each nvar
def getAverageDepth():
	f = open("result_depth.txt", "w")
	f.write("depth\ttime\tcoverage\n")
	for key in table_depth:
		timing = table_depth[key][0]
		num_file = table_depth[key][2]
		coverage = table_depth[key][1]
		average_timing = timing/num_file
		average_coverage = coverage/num_file
		line = str(key) +'\t'+str(average_timing)+'\t'+str(average_coverage)+'\n'
		f.write(line)
	f.close()


#Parse the C file name, returning a dictionary containing the parameters of the C file   
def parseCFileName(filename):
	splitList = filename.split("_")
	ret = {}
	ret["numEquations"] = int(splitList[1])
	ret["numVars"] = int(splitList[2])
	return ret
	
#TODO : AGGREGATE, CHANGE VARIABLES, EXPERIMENT

theTimeout = 20   #in seconds	
testDir = './test_files'
crestDir = './crest-z3-master'
#varBound = 10
#maxDeg = 2
#depthData = {}
cFiles = [name
			 for root, dirs, files in os.walk(testDir)
			 for name in files
			 if name.endswith(".c")]

i = 1
for cFile in cFiles:
	parameters = parseCFileName(cFile)
	numEquations = parameters['numEquations']
	numVars = parameters['numVars']
	metrics = runFileThroughCrestAndGetStats(cFile)
	timing = metrics["timing"]
	coverage = metrics["coverage"]
	print(metrics)
	
	aggregatedByDepth(numEquations, timing, coverage)
	aggregatedByNvar(numVars, timing, coverage)


getAverageDepth()
getAverageNvar()

