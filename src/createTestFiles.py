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

def ifGeneration(eqnSys):
	n = len(eqnSys)
    if (n == 0):
        return ""
    firstEquation = eqnSys
    result = ''
    result = "if ( " + generateOneFormula(nvars, operators, maxDeg, valueRange) + " )\n{\n"
    result += "printf(\"I am here at depth %d\");\n" % depth
    result += ifGeneration(depth-1, nvars, maxDeg, operators, valueRange)
    result += "\n}\n else\n {\n printf(\"I am at the else of depth %d\"); \n}" %depth
    return result

randomSystem = createRandomNonlinearSystem(5, 10, 2)
ifString = generateIfStmt(randomSystem)
system = createRandomNonlinearSystem(3,5,3)
for equation in system:
	print printEquation(equation)
    
