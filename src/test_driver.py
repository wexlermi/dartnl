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
	#cFile = 'testfile_2_3_10_1_1011.c'
	crestc_command = os.path.join(crestDir, "bin/crestc") + ' ' + os.path.join(testDir,cFile)
	crestc_output = run(crestc_command, shell=True, timeout = 3)[2]

	print crestc_output

	start = time.time()
	exportZ3LibCmd = 'export LD_LIBRARY_PATH=./crest-z3-master/z3/lib'
	run_crest_command = exportZ3LibCmd + ' && ' + os.path.join(crestDir, "bin/run_crest") + ' ' + os.path.join(testDir,cFile[ :len(cFile)-2]) + ' 10 -hybrid'

	print cFile
	run_crest_output = run(run_crest_command, shell=True, timeout=40)
	ifOutput = run_crest_output[1]
	iterationOutput = run_crest_output[2]
	
	print ifOutput
	print iterationOutput
	
	end = time.time()
	
	results =  parseCrestOutput(iterationOutput)
	maxdepth = parseProgOutput(ifOutput)
	metrics = {}
	metrics["timing"] = end - start
	metrics["coverage"] = results
	metrics["depth"] = maxdepth
	return metrics

#TODO
#get the coverage ratio of each test case
def parseCrestOutput(run_crest_output):
	#temp = re.findall(r'\w+\sbranches',crestc_output)
	#tks = temp[0].split(" ")
	#branches = tks[0]
	covereds = re.findall(r'covered\s\d+',run_crest_output)
	maxBranch = 0
	#print covereds
	for covered in covereds:
		maxBranch = max(maxBranch, int(covered[8:]))
	return maxBranch


def parseProgOutput(ifOutput):
	#temp = re.findall(r'\w+\sbranches',crestc_output)
	#tks = temp[0].split(" ")
	#branches = tks[0]
	solveds = re.findall(r'Solved the if at depth\s\d+',ifOutput)
	maxDepth = 0
	#print covereds
	for solved in solveds:
		maxDepth = max(maxDepth, int(solved[23:]))
	return maxDepth

nvar = 5
depth = 5
table_time = [[0 for x in xrange(nvar)] for x in xrange(depth)]  #table by depth to store the total time

#aggregated timing and coverage for each depth 
'''
def aggregatedTime(Depth, numVar, timing):
		table_time[Depth-1][numVar-1] = timing 
'''
#aggregated timing and coverage for each nvar
table_coverage = [[0 for x in xrange(nvar)] for x in xrange(depth)]

table_depth = [[0 for x in xrange(nvar)] for x in xrange(depth)]
'''
def aggregatedByNvar(nvar, timing, coverage):
	if nvar not in table_nvar:
		table_nvar[nvar] = [timing, coverage, 1]
	else:
		table_nvar[nvar][0] += timing
		table_nvar[nvar][1] += coverage
		table_nvar[nvar][2] += 1

'''
#get the average run time and coverage for each depth
def getAverageTime():
	
	f = open("result_time.txt", "w")
	f.write("\t%20s"%"1"+"%20s"%"2"+"%20s"%"3"+"%20s"%"4"+"%20s"%"5"+"\n")
	for i in xrange(depth):
		f.write(str(i+1)+"\t")
		for j in xrange(nvar):
			timing = table_time[i][j]/3
			f.write("%20s" % str(timing))
		f.write("\n")
	f.close()


#get the average run time and coverage for each nvar
def getAverageCoverage():
	f = open("result_coverage.txt", "w")
	f.write("\t%10s"%"1"+"%10s"%"2"+"%10s"%"3"+"%10s"%"4"+"%10s"%"5"+"\n")
	for i in xrange(depth):
		f.write(str(i+1)+"\t")
		for j in xrange(nvar):
			coverage = float(table_coverage[i][j])/float(3)
			f.write("%10s"% str(coverage))
		f.write("\n")
	f.close()

def getAverageDepth():
	f = open("result_Depth.txt", "w")
	f.write("\t%20s"%"1"+"%20s"%"2"+"%20s"%"3"+"%20s"%"4"+"%20s"%"5"+"\n")
	for i in xrange(depth):
		f.write(str(i+1)+"\t")
		for j in xrange(nvar):
			coverage = float(table_depth[i][j])/float(3)
			f.write("%20s"% str(coverage))
		f.write("\n")
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
	dep = metrics["depth"]
	print(metrics)
	key = str(numEquations)+'_'+str(numVars)
	table_time[numEquations-1][numVars-1] += timing
	table_coverage[numEquations-1][numVars-1]+=coverage
	table_depth[numEquations-1][numVars-1]+=dep
	#aggregated(key, timing, coverage)
	#aggregatedByNvar(numVars, timing, coverage)


getAverageTime()
getAverageCoverage()
getAverageDepth()
