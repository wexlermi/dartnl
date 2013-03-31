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
	exportZ3LibCmd = 'export LD_LIBRARY_PATH=./crest-z3-master/z3/lib'
	run_crest_command = exportZ3LibCmd + ' && ' + os.path.join(crestDir, "bin/run_crest") + ' ' + os.path.join(testDir,cFile[ :len(cFile)-2]) + ' 10 -dfs'
	run_crest_output = subprocess.check_output(run_crest_command, shell=True, timeout=theTimeout)
	#run_crest_output = subprocess.check_output([os.path.join(crestDir, "bin/run_crest"), os.path.join(testDir,cFile[ :len(cFile)-2]), "10", "-dfs"], shell=True, timeout=theTimeout)
	end = time.time()*1000
	
	#print(crestc_output)
	print(run_crest_output)
	
	#results =  parseCrestOutput(run_crest_output)
	metrics = {}
	metrics["timing"] = end - start
	#metrics["coverage"] = results
	return metrics
	
#TODO
#get the coverage ratio of each test case
def parseCrestOutput(crestcOut,coverage):
	f = open(crestcOut, "r")
	temp = re.findall(r'\w+\sbranches',f.read())
	print(temp)
	tks = temp[0].split(" ")
	branches = tks[0]
	covered = file_len(coverage)
	ratio = float(covered)/float(branches)
	f.close()
	return ratio

def file_len(fname):
	with open(fname) as f:
		for i, l in enumerate(f):
			pass
	return i + 1

#Parse the C file name, returning a dictionary containing the parameters of the C file   
def parseCFileName(filename):
	splitList = filename.split("_")
	ret = {}
	ret["numEquations"] = int(splitList[1])
	ret["numVars"] = int(splitList[2])
	return ret
	
			 
#TODO : AGGREGATE, CHANGE VARIABLES, EXPERIMENT
def aggregate():
	f = open("results.txt","w")
	for cFile in cFiles:
		parseName = parseCFileName(cFile)
		results = runFileThroughCrestAndGetStats(cFile)
		line = cFile +" " + str(parseName["depth"]) +" "+str(parseName["nvar"])+" "+str(parseName["maxdeg"])+" "+ str(results["timing"])+" "+str(results["coverage"])+"\n"
		f.write(line)
	f.close()

theTimeout = 20   #in seconds	
testDir = './test_files'
crestDir = './crest-z3-master'
varBound = 10
maxDeg = 2
depthData = {}
cFiles = [name
			 for root, dirs, files in os.walk(testDir)
			 for name in files
			 if name.endswith(".c")]
#print cFiles
#pdb.set_trace()
i = 1
for cFile in cFiles:
	if i==2:
		break
	parameters = parseCFileName(cFile)
	numEquations = parameters['numEquations']
	numVars = parameters['numVars']
	metrics = runFileThroughCrestAndGetStats(cFile)
	timing = metrics["timing"]
	#coverage = metrics["coverage"]
	print(metrics)
	i += 1
	
#subprocess.Popen(["cd", testDir])


"""
cFiles = [os.path.join(root, name)
			 for root, dirs, files in os.walk(testDir)
			 for name in files
			 if name.endswith(".c")]
"""

aggregate()

