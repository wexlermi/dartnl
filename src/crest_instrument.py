#!/usr/bin/python -tt
import sys
import re
import fileinput
  
def main():
  f = open(sys.argv[1], 'r')
	strings = re.findall(r'int\s+[\w=*\w,\s]+',f.read())
#[ -,A-Za-z0-9]
	f.close();

	for line in fileinput.input(sys.argv[1], inplace =1):
		#this part works for "for loop"--- unfinished
			#if("for" && "int" in line):
			#i = line.find("int")
			#j = line.find("=")
			#var = line[i+4:j]
			#line = line+1;m
				
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
	
	

if __name__ == '__main__':
	main()
