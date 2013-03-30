import subprocess
import os
import time
import re

def runFileThroughCrestAndGetStats(cFile):
	start = time.time()*1000
	with open('crestcOut.txt', 'w') as output_f:
		proc1 = subprocess.Popen([os.path.join(crestDir, "bin/crestc"), cFile], stdout=output_f, stderr=output_f)
	proc2 = subprocess.Popen([os.path.join(crestDir, "bin/run_crest"), './' + cFile[ :len(cFile)-2], "10", "-dfs"])
	end = time.time()*1000
	
	results =  analyzer("crestcOut.txt","coverage")
	metrics = {}
	metrics["timing"] = end - start
	metrics["coverage"] = results
	return metrics
	
#TODO
#get the coverage ratio of each test case
def analyzer(crestcOut,coverage):
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


testDir = '.'
crestDir = '/home/xiaoye/study/crest-z3-master'
#subprocess.Popen(["cd", testDir])
#ssubprocess.Popen(["export", 'LD_LIBRARY_PATH=' + os.path.join(crestDir + "/z3/lib")])

cFiles = [os.path.join(root, name)
			 for root, dirs, files in os.walk(testDir)
			 for name in files
			 if name.endswith(".c")]


#Parse the C file name, returning a dictionary containing the parameters of the C file   
def parseCFileName(cFile):
	filename=cFile[ :len(cFile)-2]
	varibles = filename.split("_")
	ret = {}
	ret["depth"] = varibles[1]
	ret["nvar"] = varibles[1]
	ret["maxdeg"] = varibles[3]
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


aggregate()

