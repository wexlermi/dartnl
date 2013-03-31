import createTestFiles
import os
import subprocess


def makeCFiles():
	for numEquations in range(1, 10):
		for numVars in range(1, 10):	
			cFile = createTestFiles.createCFile(testDir, numEquations, numVars, varBound, maxDeg)
			subprocess.Popen(['./instrument/crest_instrument.py', '-f', os.path.join(testDir, cFile)])

def emptyTestDirectory():
	fileList = os.listdir(testDir)
	for fileName in fileList:
		os.remove(os.path.join(testDir, fileName))

timeout = 20   #in seconds	
testDir = './test_files'
varBound = 10
maxDeg = 2

emptyTestDirectory()
makeCFiles()
