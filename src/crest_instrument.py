#!/usr/bin/python -tt
import pdb
import sys
import re
import fileinput

#typeMap = {'int': 'int', 'short': 'short', 'char': 'char', 'unsigned int': 'unsigned_int', 'unsigned short': 'unsigned_short', 'unsigned char': 'unsigned_char'}
typeList = ['int', 'short', 'char']
def createCrestStr(x):
	#pdb.set_trace()
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


intputFileName = sys.argv[1]
f = open(intputFileName, 'r')
text = f.read()
f.close()

includeStr = '#include <crest.h>'
if (includeStr not in text):
	text = includeStr + text

unsignedPattern = r'([\t ])*(unsigned %s)\s+(.*);'

for t in typeList:
	text = re.sub(unsignedPattern % t, createCrestStr, text)
	
signedPattern = r'([\t ])*(?<!unsigned )(%s)\s+(.*);'
for t in typeList:
	text = re.sub(signedPattern % t, createCrestStr, text)
#matches = re.findall(pattern, text)
				#[ -,A-Za-z0-9]
#pdb.set_trace()
outputFile = open(intputFileName, 'w')
outputFile.write(text)
outputFile.close()

#print newText



'''
for match in matches:
	#this part works for "for loop"--- unfinished
		#if("for" && "int" in line):
		#i = line.find("int")
		#j = line.find("=")
		#var = line[i+4:j]
		#line = line+1;m
	text = text.replace(match, match
	for strs in strings:
		temp = strs[4:]
		token = temp.split(',')
		newstr = strs
		for tks in token:
			index = tks.find("=")
			if index == -1:
				var = tks
			else:
				var = tks[:index]
			newstr = newstr+';\nCREST_INT('+var+')'
		
		if strs in line and "(" not in line:
			line = line.replace(strs,newstr)
			break
		
	sys.stdout.write(line)

fileinput.close()
'''
