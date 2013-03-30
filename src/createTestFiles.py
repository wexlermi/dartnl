import random
from collections import namedtuple
import pdb
import os

def evaluateTerm(term, varValues):
	coef = term['coef']
	degList = term['degList']
	product = coef
	for i in range(len(degList)):
		product *= varValues[i] ** degList[i]
	return product
	
def evaluate(exprTermList, varValues):
	#pdb.set_trace()
	total = 0
	for i in range(len(exprTermList)):
		total += evaluateTerm(exprTermList[i], varValues)
	return total
	
def createTerm(numVars, varBound, totalDeg ):
	#pdb.set_trace()
	coef = random.randint(1, varBound)
	degList = [0] * numVars
	numVarsToInclude = random.randint(1, numVars)
	varsToInclude = random.sample(set(range(numVars)), numVarsToInclude)
	random.shuffle(varsToInclude)
	i = 0
	while totalDeg >= 1:
		if i == len(varsToInclude) - 1:
			degList[varsToInclude[i]] = totalDeg
			break
		degList[varsToInclude[i]] = random.randint(1, totalDeg)
		totalDeg -= degList[varsToInclude[i]]
		i += 1
		
	return {"coef": coef, "degList": degList}
	
def createRandomEquation(varValues, varBound, totalDeg):
	n = len(varValues)
	exprTermList = []
	for i in range(n):
		exprTermList.append(createTerm(n, varBound, totalDeg))
	total = evaluate(exprTermList, varValues)	
	return {"exprTermList": exprTermList, "varValues": varValues, "total": total}

def createRandomNonlinearSystem( numEquations, numVars, varBound, totalDeg):
	varValues = []
	for i in range(numVars):
		varValues.append(random.randint(1, varBound))
	equationList = []
	for i in range(numEquations):
		equationList.append(createRandomEquation(varValues, varBound, totalDeg))
	return equationList
	
def printTerm(term):
	coef = term['coef']
	degList = term['degList']
	output = str(coef)
	for i in range(len(degList)):
		deg = degList[i]
		if deg >= 1:
			for j in range(deg):
				output += ' * x' + str(i)
	return output
def printEquation(equation):
	exprTermList = equation['exprTermList']
	varValues = equation['varValues']
	total = equation['total']
	output = printTerm(exprTermList[0])
	for i in range(1, len(exprTermList)):
		output += ' + ' + printTerm(exprTermList[i])
	output += ' == ' + str(total)
	return output

def printVarValueString( varValues ):
	output = 'x0 = ' + str(varValues[0])
	for i in range(1, len(varValues)):
		output += ', x' + str(i) + '= ' + str(varValues[i])
	return output
	
def cVarString( n ):
	output = 'x0 = %d'
	for i in range(1, n):
		output += ', x' + str(i) + ' = %d'
	return output

def cVarStringOther(n):
	output = 'x0'
	for i in range(1, n):
		output += ', x' + str(i)
	return output
	
def printDeclareVarStr( n ):
	output = ''
	for i in range(n):
		output += '\tint x%d;\n' % i
	return output

def generateIfStmt(eqnSys, whichEqn):
	n = len(eqnSys)
	if (whichEqn == len(eqnSys)):
		return ""
	print whichEqn
	eqn = eqnSys[whichEqn]
	varValues = eqn['varValues']
	result = ''
	result = '\t' * (whichEqn + 1) + 'if ( ' + printEquation(eqn) + ' ) //' + printVarValueString(varValues) + '\n' + '\t' * (whichEqn + 1) + '{\n'
	result += '\t' + '\t' * (whichEqn + 1) + 'printf("Solved the if at depth %d. Solution: ' % (whichEqn + 1) + cVarString(n) + '\\n" , ' + cVarStringOther(n)+ ');\n'
	result += generateIfStmt(eqnSys, whichEqn + 1)
	result += '\t' * (whichEqn + 1) + '}\n'
	return result

def createCFile(directory, numEquations, numVars, varBound, totalDeg):
	randomSystem = createRandomNonlinearSystem(numEquations, numVars, varBound, totalDeg)
	ifString = generateIfStmt(randomSystem, 0)
	uniqueid = random.randint(1, 10000)
	filename = 'testfile_' + str(numEquations) + '_' + str(numVars) + '_'  + str(varBound) + '_' + str(totalDeg) + '_' + str(uniqueid) + '.c'
	outputFile = open(os.path.join(directory, filename), 'w')
	outputFile.write('#include <stdio.h>\n\nint main()\n{\n' + printDeclareVarStr(numVars) + '\n' + ifString + '}')
	outputFile.close()
	return filename

createCFile('.', 5, 3, 10, 3)
