import random
from collections import namedtuple

def evaluateTerm(term, varValues, isFirstTerm):
	coef = term['coef']
	degList = term['degList']
	neg = term['negative']
	product = coef
	for i in range(len(degList)):
		product *= varValues[i] ** degList[i]
	if neg and not isFirstTerm:
		product *= -1
	return product
	
def evaluate(exprTermList, varValues):
	total = evaluateTerm(exprTermList[0], varValues, True)
	for i in range(len(exprTermList)):
		total += evaluateTerm(exprTermList[i], varValues, False)
	return total
		#varValue = random.randint(1, varBound)
		#evaluateExpr(va
def createTerm(n, varBound, maxDeg, ):
	coef = random.randint(1, varBound)
	degList = []
	for i in range(n):
		degList.append(random.randint(0, maxDeg))
	negative = random.choice([True, False])
	return {"coef": coef, "degList": degList, "negative": negative}
	
def createRandomEquation(n, varBound, maxDeg):
	exprTermList = []
	for i in range(n):
		exprTermList.append(createTerm(n, varBound, maxDeg))
	varValues = []
	for i in range(n):
		varValues.append(random.randint(1, varBound))
	total = evaluate(exprTermList, varValues)	
	return {"exprTermList": exprTermList, "varValues": varValues, "total": total}

def createRandomNonlinearSystem( n, varBound, maxDeg ):
	equationList = []
	for i in range(n):
		equationList.append(createRandomEquation(n, varBound, maxDeg))
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
		negative = exprTermList[i]['negative']
		if (negative):
			output += ' - '
		else:
			output += ' + '
		output += printTerm(exprTermList[i])
	output += ' == ' + str(total)
	return output

def printVarValueString( varValues ):
	output = 'x0 = ' + str(varValues[0])
	for i in range(1, len(varValues)):
		output += ', x' + str(i) + '= ' + str(varValues[i])
	return output
	
def cVarString( n ):
	output = 'x0 = %d'
	for i in range(n):
		output += ', x' + str(i) + '= %d'
	return output

def cVarStringOther(n):
	output = 'x0'
	for i in range(n):
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
	#result = 'if ( ' + printEquation(eqn) + ' ) //' + printVarValueString(varValues) + '\n{\n'
	result = '\t' * (whichEqn + 1) + 'if ( ' + printEquation(eqn) + ' ) //' + printVarValueString(varValues) + '\n' + '\t' * (whichEqn + 1) + '{\n'
	#result += '\t' + '\t' * (whichEqn + 1) + 'printf("Solved the if at depth %d. Solution: ' % (whichEqn + 1) + cVarString(n) + '");\n'
	result += '\t' + '\t' * (whichEqn + 1) + 'printf("Solved the if at depth %d. Solution: ' % (whichEqn + 1) + cVarString(n) + '" , ' + cVarStringOther(n)+ ');\n'
	result += generateIfStmt(eqnSys, whichEqn + 1)
	result += '\t' * (whichEqn + 1) + '}\n'
	#result += "\n}\n else\n {\n printf(\"I am at the else of depth %d "); \n}" % whichEqn
	return result

n = 5
randomSystem = createRandomNonlinearSystem(n, 7, 2)
ifString = generateIfStmt(randomSystem, 0)
outputFile = open('output.c', 'w')
outputFile.write('#include <stdio.h>\n\nint main()\n{\n' + printDeclareVarStr(n) + '\n' + ifString + '\n}')
#print ifString
#system = createRandomNonlinearSystem(3,5,3)
#for equation in system:
#print printEquation(equation)
