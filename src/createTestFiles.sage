def createTestCFile(depth, nvars, maxDeg, operators, valueRange):
    """
    This function generates an instrumented C-file for CREST-Z3.
    It generates nested if-statements and with that we will check
    the performance and accuracy of CREST-Z3

    @param depth:       The number of nested if-statements in the C-File
    @type  depth:       int[>0]
    @param nvars:       The number of variables we want to include
    @type  nvars:       int[>0]
    @param maxDeg:      The maximum TOTAL degree in the monomials of the polynomial
                        for the condition
    @type  maxDeg:      int[>0]
    @param operators:   A subset of {"==","!=", "<", ">", "<=", ">="} as list
    @type  operators:   list
    @param valueRange:  An upper and lower bound (tuple) from which random values can be chosen.
    @type  valueRange:  tuple(length 2)
    @returns:           A string representing a C-file with the desired nested loop conditions.
    @rtype:             str
    """
    result = "#include <stdio.h>\n\n"
    result += "int main(int argc, char ** argv)\n{\n"
    for i in xrange(nvars):
        result+="int x"+str(i)+";\n"
    result += ifGeneration(depth,nvars, maxDeg, operators, valueRange)
    result += "\n } \n"
    return result
    

def ifGeneration(depth, nvars, maxDeg, operators, valueRange):
    if (depth == 0):
        return ""
    result = "if ( " + generateOneFormula(nvars, operators, maxDeg, valueRange) + " )\n{\n"
    result += "printf(\"I am here at depth %d\");\n" % depth
    result += ifGeneration(depth-1, nvars, maxDeg, operators, valueRange)
    result += "\n}\n else\n {\n printf(\"I am at the else of depth %d\"); \n}" %depth
    return result
    
def translatePolyIntoC(p):
    mons = map(lambda x: str(x),p.monomials())
    coeffs = map(lambda x: str(x), p.coefficients())
    resMons = []
    for i in mons:
        entry = ""
        j = 0
        while True:
            tempVar = ""
            while j<len(i) and i[j]!='^' and i[j]!='*':
                tempVar += i[j]
                j = j+1
            if j>=len(i):
                entry+=tempVar
                resMons.append(entry)
                break;
            elif i[j] == '*':
                entry+=tempVar+"*"
                j = j+1
            elif i[j] == '^':
                k = j+1
                expon = ""
                while k<len(i) and i[k]!='*':
                    expon+=i[k]
                    k=k+1
                entry+=(tempVar+"*")*int(expon)
                if (k<len(i)):
                    j = k+1
                else:
                    entry = entry[0:len(entry)-1]
                    j=k
    return "+".join(map(lambda x: "("+x[0]+"*"+x[1]+")",zip(coeffs,resMons)))

def generateOneFormula(nvars, operators, maxDeg, valueRange):
    #Assign values for the variables
    variableValues = []
    for i in xrange(0,nvars):
        variableValues.append(randint(valueRange[0],valueRange[1]))
    #Generate the random polynomial
    P = PolynomialRing(ZZ, nvars,'x')
    elem = P.random_element(maxDeg, randint(1,(maxDeg*(maxDeg+1))//2))
    ourEval = elem(variableValues)
    ourOperator = operators[randint(0,len(operators)-1)]
    if (ourOperator == "=="):
        return translatePolyIntoC(elem)+ourOperator+str(ourEval)
    elif (ourOperator == "!="):
        temp = randint(-100,100);
        while(temp == 0):
            temp = randint(-100,100)
        return translatePolyIntoC(elem)+ourOperator+str(ourEval+temp)
    elif (ourOperator == "<" or ourOperator == "<="):
        temp = 0
        if(ourOperator == "<="):
            temp = randint(0,100)
        else:
            temp= randint(1,100)
        return translatePolyIntoC(elem)+ourOperator+str(ourEval+temp)
    elif (ourOperator == ">" or ourOperator == ">="):
        temp = 0
        if(ourOperator == ">="):
            temp = randint(0,100)
        else:
            temp= randint(1,100)
        return translatePolyIntoC(elem)+ourOperator+str(ourEval-temp)

for i in xrange(1000):
    depth = randint(1,20)
    nvars = randint(1,20)
    maxDeg = randint(1,20)
    operators = ["==","!=", "<", ">", "<=", ">="]
    valueRange = (-1000,1000)
    try:
        f = open("testFile_"+str(i)+"_"+str(depth)+"_"+str(nvars)+"_"+str(maxDeg)+".c","w")
        f.write(createTestCFile(depth, nvars, maxDeg, operators,valueRange))
        f.close()
    except:
        continue
