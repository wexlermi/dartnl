import subprocess
import os
import time

def runFileThroughCrestAndGetStats(cFile):
	start = time.time()*1000
	subprocess.Popen([os.path.join(crestDir, "bin/crestc"), cFile])
	output = subprocess.Popen([os.path.join(crestDir, "bin/run_crest"), './' + cFile[len(cFile)-2)], "10", "-dfs"])
	end = time.time()*1000
	results =  scrapeOutput(output)
	metrics = {}
	metrics["timing"] = end - start
	metrics["coverage"] = results.
	
#TODO
def scrapeOutput(output):
	


testDir = '.'
crestDir = '/home/xiaoye/study/crest-z3-master-back/'
subprocess.Popen(["cd", testDir])
subprocess.Popen(["export", 'LD_LIBRARY_PATH=" + crestDir + "/z3/lib"])

cFiles = [os.path.join(root, name)
			 for root, dirs, files in os.walk(testDir)
			 for name in files
			 if name.endswith(".c")]
			 
//TODO : AGGREGATE, CHANGE VARIABLES, EXPERIMENT
for cFile in cFiles:
	results = runFileThroughCrestAndGetStats(cFile)
