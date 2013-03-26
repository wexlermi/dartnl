#!/usr/bin/python

# INSTRUCTIONS FOR USE:
# Put this file in the directory whose C files you want to recursively
# instrument with CREST declarations. Run the file by entering the 
# command:    ./crest_instrument.py  After this is ran, all the '.c' files
# in the directory (recursively)  will be instrumented so they can be ran with CREST.
#
# Also, you can instrument a specific file by typing: ./crest_instrument.py -f file_to_insrument.c


import pdb
import sys
import re
import fileinput
import os

typeList = ['int', 'short', 'char']

def createCrestStr(x):
	spaceTabs = x.group(1)
	theType = x.group(2)
	theTypeSplit = theType.split(' ')
	crestDec = 'CREST_'
	if (theTypeSplit[0] == 'unsigned'):
		crestDec += 'unsigned_' + theTypeSplit[1]
	else:
		crestDec += theTypeSplit[0]
	varStr = x.group(3)
	varStr = varStr.strip()
	varList = varStr.split(',')
	varList = [y.strip() for y in varList]
	crestStr = '\n'
	for y in varList:
		equalsIndex = y.find('=')
		if (equalsIndex != -1):
			y = y[:equalsIndex]
		y = y.strip()
		crestStr += spaceTabs + crestDec  + '(' + y + ');\n'
	crestStr = crestStr[:len(crestStr)-1] #remove the extra new line
	return x.group(0) + crestStr

def tempForLoopVarReplacement(x):
	return x.group(1) + x.group(2).upper()
	
def undoTempForLoopVarReplacement(x):
	return x.group(1) + x.group(2).lower()	

def forLoopCrestStr(x):
	spaceTabs = x.group(1)
	theType = x.group(2)
	theTypeSplit = theType.split(' ')
	crestDec = 'CREST_'
	if (theTypeSplit[0] == 'unsigned'):
		crestDec += 'unsigned_' + theTypeSplit[1]
	else:
		crestDec += theTypeSplit[0]
	varStr = x.group(3)
	varStr = varStr.strip()
	varList = varStr.split(',')
	varList = [y.strip() for y in varList]
	crestStr = '\n'
	for y in varList:
		equalsIndex = y.find('=')
		if (equalsIndex != -1):
			y = y[:equalsIndex]
		y = y.strip()
		crestStr += spaceTabs + "\t" + crestDec  + '(' + y + ');\n'
	crestStr = crestStr[:len(crestStr)-1] #remove the extra new line
	return x.group(0) + crestStr	

def instrumentFile(fileName):
	f = open(fileName, 'r')
	text = f.read()
	f.close()
	
	#get the crest.h include header
	includeStr = '#include <crest.h>'
	if (includeStr not in text):
		text = includeStr + "\n" + text
	
	#temporarily makes all declarations inside of for loop capitalized, so later analysis doesn't interfere
	skipForLoopPattern = r'(\(\s*)(%s\s*%s)'
	for t in typeList:
		text = re.sub(skipForLoopPattern % ('', t), tempForLoopVarReplacement, text)
		text = re.sub(skipForLoopPattern % ('unsigned', t), tempForLoopVarReplacement, text)
	
	#declare all unsigned variables
	unsignedPattern = r'(?<!\()([\t ]*)(unsigned\s*%s)\s+([^;{]*);'
	for t in typeList:
		text = re.sub(unsignedPattern % t, createCrestStr, text)
	
	#declare all (implicitly) signed variables
	signedPattern = r'(?<!\()([\t ]*)(?<!unsigned )(%s)\s+([^;{]*);'
	for t in typeList:
		text = re.sub(signedPattern % t, createCrestStr, text)

	#undo the capitalization from before
	for t in typeList:
		text = re.sub(skipForLoopPattern % ('', t.upper()), undoTempForLoopVarReplacement, text)
		text = re.sub(skipForLoopPattern % ('UNSIGNED', t.upper()), undoTempForLoopVarReplacement, text)
	
	#crest-declare variables declared in for loop  e.g.    for (int i = 0; i < 10; i++){ }
	forLoopPattern = r'([\t ]*)for\s*\(\s*(%s\s*%s)\s+([^;]*);[^{]*{'
	for t in typeList:
		text = re.sub(forLoopPattern % ('', t), forLoopCrestStr, text)
		text = re.sub(forLoopPattern % ('unsigned', t), forLoopCrestStr, text)		
	
	#write the 'text' variable to the original file
	outputFile = open(fileName, 'w')
	outputFile.write(text)
	outputFile.close()


######		MAIN ENTRY POINT	######
 
fileToInstrument = None
numargs = len(sys.argv)

if (numargs == 3):
	if (sys.argv[1] == '-f'):
		fileToInstrument = sys.argv[2]
		instrumentFile(fileToInstrument)
		sys.exit()
		
elif (numargs == 1):
	path = '.'

	#recursively get a list of all C files in this directory
	cFiles = [os.path.join(root, name)
				 for root, dirs, files in os.walk(path)
				 for name in files
				 if name.endswith(".c")]
				 
	for f in cFiles:
		instrumentFile(f)
		
	sys.exit()
else:
	print "Invalid arguments."
	sys.exit()

