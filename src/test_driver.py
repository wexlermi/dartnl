import subprocess
import os
import time
import re
import pdb

def runFileThroughCrestAndGetStats(cFile):
	print(cFile)
	crestc_output = subprocess.check_output([os.path.join(crestDir, "bin/crestc"), os.path.join(testDir,cFile)], timeout=theTimeout)
	print(crestc_output)
	start = time.time()*1000
	exportZ3LibCmd = 'export LD_LIBRARY_PATH=/home/xiaoye/study/crest-z3-master/z3/lib'
	run_crest_command = exportZ3LibCmd + ' && ' + os.path.join(crestDir, "bin/run_crest") + ' ' + os.path.join(testDir,cFile[ :len(cFile)-2]) + ' 10 -dfs'
	run_crest_output = subprocess.check_output(run_crest_command, shell=True, timeout=theTimeout)
	#run_crest_output = subprocess.check_output([os.path.join(crestDir, "bin/run_crest"), os.path.join(testDir,cFile[ :len(cFile)-2]), "10", "-dfs"], shell=True, timeout=theTimeout)
	end = time.time()*1000
	
	#print(crestc_output)
	print(run_crest_output)
	
	results =  parseCrestOutput(crestc_output,run_crest_output)
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
testDir = '/home/xiaoye/study/test_files'
crestDir = '/home/xiaoye/study/crest-z3-master'
#varBound = 10
#maxDeg = 2
#depthData = {}
cFiles = [name
			 for root, dirs, files in os.walk(testDir)
			 for name in files
			 if name.endswith(".c")]

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


