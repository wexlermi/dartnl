#include<iostream>
#include<vector>
#include<map>
using std::vector;
using std::string;
using std::map;

class Polynomial
{
private:
  string poly;
public:

  Polynomial()
  {
    this->poly = "0";
  }
  
  Polynomial(string poly)
  {
    this->poly = poly;
  }

  string getPoly()
  {
    return this->poly;
  }

  void setPoly(string poly)
  {
    this->poly = poly;
  }

  void setPoly(Polynomial poly)
  {
    this->poly = poly.getPoly();
  }
};

enum Connector {EQ, NEQ};

class MathematicalExpression
{
private:

  Polynomial lhs;
  Polynomial rhs;
  Connector  con;

public:

  MathematicalExpression(Polynomial lhs, Polynomial rhs, Connector con)
  {
    this->lhs = lhs;
    this->rhs = rhs;
    this->con = con;
  }

  Polynomial getLHS()
  {
    return this->lhs;
  }

  Polynomial getRHS()
  {
    return this->rhs;
  }

  Connector getConnector()
  {
    return this->con;
  }

  void setLHS(Polynomial lhs)
  {
    this->lhs = lhs;
  }

  void setRHS(Polynomial rhs)
  {
    this->rhs = rhs;
  }

  void setConnector(Connector con)
  {
    this->con = con;
  }

};

class SystemToSolve
{
private:

  vector<string> vars;
  vector<MathematicalExpression> expr;

public:

  SystemToSolve()
  {
    //boring constructor. Everything is just empty
  }

  SystemToSolve(vector<string> vars, vector<MathematicalExpression> expr)
  {
    this->vars = vars;
    this->expr = expr;
  }

  vector<string> getVars()
  {
    return this->vars;
  }

  string getVar(int i)
  {
    return this->vars[i];
  }

  void setVars(vector<string> vars)
  {
    this->vars = vars;
  }

  void addVar(string var)
  {
    this->vars.push_back(var);
  }

  vector<MathematicalExpression> getMathExpressions()
  {
    return this->expr;
  }

  MathematicalExpression getMathExpression(int i)
  {
    return this->expr[i];
  }

  void setMathExpressions(vector<MathematicalExpression> expr)
  {
    this->expr = expr;
  }

  void addMathExpression(MathematicalExpression m)
  {
    this->expr.push_back(m);
  }
};

class Solution
{
private:

  SystemToSolve sysToSolve;
  map<string, int> sols;
  bool infiniteSolSpace;

public:

  Solution(SystemToSolve sysToSolve, map<string, int> sols, bool infiniteSolSpace)
  {
    this->sysToSolve = sysToSolve;
    this->sols = sols;
    this->infiniteSolSpace = infiniteSolSpace;
  }

  SystemToSolve getSystemToSolve()
  {
    return this->sysToSolve;
  }

  void setSystemToSolve(SystemToSolve s)
  {
    this->sysToSolve = s;
  }

  map<string, int> getSols()
  {
    return this->sols;
  }

  void setSols(map<string, int> sol)
  {
    this->sols = sol;
  }

  int getSol(string v)
  {
    return this->sols[v];
  }
};

int main()
{
  return 0;
}
