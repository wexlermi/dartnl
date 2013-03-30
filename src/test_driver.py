import subprocess
import os
import time
import re
import createTestFiles

def timeout_command(command, timeout):
	"""call shell-command and either return its output or kill it
	if it doesn't normally exit within timeout seconds and return None"""
	import subprocess, datetime, os, time, signal
	start = datetime.datetime.now()
	process = subprocess.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	while process.poll() is None:
		time.sleep(0.1)
		now = datetime.datetime.now()
		if (now - start).seconds> timeout:
			os.kill(process.pid, signal.SIGKILL)
			os.waitpid(-1, os.WNOHANG)
			return None
	return process.stdout.read()

def runFileThroughCrestAndGetStats(cFile):
	start = time.time()*1000
	#with open('crestcOut.txt', 'w') as output_f:
	crestc_output = timeout_command([os.path.join(crestDir, "bin/crestc"), cFile], timeout)
	run_crest_output = timeout_command([os.path.join(crestDir, "bin/run_crest"), './' + cFile[ :len(cFile)-2], "10", "-dfs"], timeout)
	end = time.time()*1000
	
	results =  parseCrestOutput(run_crest_output)
	metrics = {}
	metrics["timing"] = end - start
	metrics["coverage"] = results
	return metrics
	
#TODO
#get the coverage ratio of each test case
def parseCrestOutput(crestcOut,coverage):
	f = open(crestcOut, "r")
        temp = re.findall(r'\w+\sbranches',f.read())
	print temp
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
def parseCFileName(cFile):
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

def processFile(cFile):
	

def makeCFiles():
	cFiles = []
	for numEquations in range(1, 10):
		for numVars in range(1, 10):	
			cFiles.append(createTestFiles.createCFile(testDir, numEquations, numVars, varBound, maxDeg))
	return cFiles
timeout = 20   #in seconds	
testDir = './test_files'
crestDir = './crest-z3-master'
varBound = 10
maxDeg = 2
depthData = {}
cFiles = makeCFiles()
for cFile in cFiles:
	parameters = parseCFileName(cFile)
	numEquations = parameters['numEquations']
	numVars = parameters['numVars']
	metrics = runFileThroughCrestAndGetStats(cFile)
	timing = metrics["timing"]
	coverage = metrics["coverage"]
	
#subprocess.Popen(["cd", testDir])
#ssubprocess.Popen(["export", 'LD_LIBRARY_PATH=' + os.path.join(crestDir + "/z3/lib")])

"""
cFiles = [os.path.join(root, name)
			 for root, dirs, files in os.walk(testDir)
			 for name in files
			 if name.endswith(".c")]
"""

aggregate()

