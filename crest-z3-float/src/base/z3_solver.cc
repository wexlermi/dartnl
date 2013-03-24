// Copyright (c) 2008, Jacob Burnim (jburnim@cs.berkeley.edu)
//
// This file is part of CREST, which is distributed under the revised
// BSD license.  A copy of this license can be found in the file LICENSE.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See LICENSE
// for details.

#include <assert.h>
#include <queue>
#include <set>
#include <stdio.h>
#include <stdlib.h>
#include <utility>

#include "base/z3_solver.h"

using std::make_pair;
using std::queue;
using std::set;

#define DEBUG(x)

#define USE_RANGE_CHECK 0
#define USE_Z3 1

#if USE_Z3
#  include <z3.h>
#endif

namespace crest {

typedef vector<const SymbolicPred*>::const_iterator PredIt;


bool Z3Solver::IncrementalSolve(const vector<value_t>& old_soln,
				   const map<var_t,type_t>& vars,
				   const vector<const SymbolicPred*>& constraints,
				   map<var_t,value_t>* soln) {
  set<var_t> tmp;
  typedef set<var_t>::const_iterator VarIt;

  fprintf(stderr, "M$'s Z3 SOLVER . . . ");

  // Build a graph on the variables, indicating a dependence when two
  // variables co-occur in a symbolic predicate.
  vector< set<var_t> > depends(vars.size());
  for (PredIt i = constraints.begin(); i != constraints.end(); ++i) {
    tmp.clear();
    (*i)->AppendVars(&tmp); /* HEECHUL: need to know variable names for the predicate */
    for (VarIt j = tmp.begin(); j != tmp.end(); ++j) {
      depends[*j].insert(tmp.begin(), tmp.end());
    }
  }

  // Initialize the set of dependent variables to those in the constraints.
  // (Assumption: Last element of constraints is the only new constraint.)
  // Also, initialize the queue for the BFS.
  map<var_t,type_t> dependent_vars;
  queue<var_t> Q;
  tmp.clear();
  constraints.back()->AppendVars(&tmp);
  for (VarIt j = tmp.begin(); j != tmp.end(); ++j) {
    dependent_vars.insert(*vars.find(*j));
    Q.push(*j);
  }

  // Run the BFS.
  while (!Q.empty()) {
    var_t i = Q.front();
    Q.pop();
    for (VarIt j = depends[i].begin(); j != depends[i].end(); ++j) {
      if (dependent_vars.find(*j) == dependent_vars.end()) {
	Q.push(*j);
	dependent_vars.insert(*vars.find(*j));
      }
    }
  }

  // Generate the list of dependent constraints.
  vector<const SymbolicPred*> dependent_constraints;
  for (PredIt i = constraints.begin(); i != constraints.end(); ++i) {
    if ((*i)->DependsOn(dependent_vars))
      dependent_constraints.push_back(*i);
  }

  soln->clear();
  if (Solve(dependent_vars, dependent_constraints, soln)) {
    // Merge in the constrained variables.
    for (PredIt i = constraints.begin(); i != constraints.end(); ++i) {
      (*i)->AppendVars(&tmp);
    }
    for (set<var_t>::const_iterator i = tmp.begin(); i != tmp.end(); ++i) {
      if (soln->find(*i) == soln->end()) {
	soln->insert(make_pair(*i, old_soln[*i]));
      }
    }
    return true;
  }

  return false;
}


//////////////////////////////////////////////////////////////////////////////////////
/**
   \brief exit gracefully in case of error.
*/
void exitf(const char* message) 
{
  fprintf(stderr,"BUG: %s.\n", message);
  exit(1);
}

/**
   \brief Simpler error handler.
 */
void error_handler(Z3_error_code e) 
{
  printf("Error code: %d\n", e);
  exitf("incorrect use of Z3");
}

/**
   \brief exit if unreachable code was reached.
*/
void unreachable() 
{
    exitf("unreachable code was reached");
}

/**
   \brief Create a logical context.  

   Enable model construction. Other configuration parameters can be passed in the cfg variable.

   Also enable tracing to stderr and register custom error handler.
*/
static Z3_context mk_context_custom(Z3_config cfg, Z3_error_handler err) 
{
    Z3_context ctx;
    
    Z3_set_param_value(cfg, "MODEL", "true");
    ctx = Z3_mk_context(cfg);
#ifdef TRACING
    Z3_trace_to_stderr(ctx);
#endif
    Z3_set_error_handler(ctx, err);
    
    return ctx;
}

/**
   \brief Create a logical context.

   Enable model construction only.

   Also enable tracing to stderr and register standard error handler.
*/
static Z3_context mk_context() 
{
    Z3_config  cfg;
    Z3_context ctx;
    cfg = Z3_mk_config();
    ctx = mk_context_custom(cfg, error_handler);
    Z3_del_config(cfg);
    return ctx;
}

/**
   \brief Create a variable using the given name and type.
*/
Z3_ast mk_var(Z3_context ctx, const char * name, Z3_sort ty) 
{
    Z3_symbol   s  = Z3_mk_string_symbol(ctx, name);
    return Z3_mk_const(ctx, s, ty);
}

/**
   \brief Create an integer variable using the given name.
*/
Z3_ast mk_int_var(Z3_context ctx, const char * name) 
{
    Z3_sort ty = Z3_mk_int_sort(ctx);
    return mk_var(ctx, name, ty);
}

/**
   \brief Create a real variable using the given name.
*/
Z3_ast mk_real_var(Z3_context ctx, const char * name) 
{
    Z3_sort ty = Z3_mk_real_sort(ctx);
    return mk_var(ctx, name, ty);
}


/**
   \brief Create a Z3 integer node using a C int. 
*/
Z3_ast mk_int(Z3_context ctx, int v) 
{
    Z3_sort ty = Z3_mk_int_sort(ctx);
    return Z3_mk_int(ctx, v, ty);
}

/**
   \brief Create a Z3 real node using a C double. 
*/
Z3_ast mk_real(Z3_context ctx, double v) 
{
    Z3_sort ty = Z3_mk_real_sort(ctx);
    return Z3_mk_real(ctx, v, ty);
}


/**
   \brief Check whether the logical context is satisfiable, and compare the result with the expected result.
   If the context is satisfiable, then display the model.
*/
void check(Z3_context ctx, Z3_lbool expected_result)
{
    Z3_model m      = 0;
    Z3_lbool result = Z3_check_and_get_model(ctx, &m);
    switch (result) {
    case Z3_L_FALSE:
        printf("unsat\n");
        break;
    case Z3_L_UNDEF:
        printf("unknown\n");
        printf("potential model:\n%s\n", Z3_model_to_string(ctx, m));
        break;
    case Z3_L_TRUE:
        printf("sat\n%s\n", Z3_model_to_string(ctx, m));
        break;
    }
    if (m) {
        Z3_del_model(ctx, m);
    }
    if (result != expected_result) {
        exitf("unexpected result");
    }
}

/**
   \brief Display a symbol in the given output stream.
*/
void display_symbol(Z3_context c, FILE * out, Z3_symbol s) 
{
    switch (Z3_get_symbol_kind(c, s)) {
    case Z3_INT_SYMBOL:
        fprintf(out, "#%d", Z3_get_symbol_int(c, s));
        break;
    case Z3_STRING_SYMBOL:
        fprintf(out, Z3_get_symbol_string(c, s));
        break;
    default:
        unreachable();
    }
}

/**
   \brief Display the given type.
*/
void display_sort(Z3_context c, FILE * out, Z3_sort ty) 
{
    switch (Z3_get_sort_kind(c, ty)) {
    case Z3_UNINTERPRETED_SORT:
        display_symbol(c, out, Z3_get_sort_name(c, ty));
        break;
    case Z3_BOOL_SORT:
        fprintf(out, "bool");
        break;
    case Z3_INT_SORT:
        fprintf(out, "int");
        break;
    case Z3_REAL_SORT:
        fprintf(out, "real");
        break;
    case Z3_BV_SORT:
        fprintf(out, "bv%d", Z3_get_bv_sort_size(c, ty));
        break;
    case Z3_ARRAY_SORT: 
        fprintf(out, "[");
        display_sort(c, out, Z3_get_array_sort_domain(c, ty));
        fprintf(out, "->");
        display_sort(c, out, Z3_get_array_sort_range(c, ty));
        fprintf(out, "]");
        break;
    case Z3_DATATYPE_SORT:
		if (Z3_get_datatype_sort_num_constructors(c, ty) != 1) 
		{
			fprintf(out, "%s", Z3_sort_to_string(c,ty));
			break;
		}
		{
        unsigned num_fields = Z3_get_tuple_sort_num_fields(c, ty);
        unsigned i;
        fprintf(out, "(");
        for (i = 0; i < num_fields; i++) {
            Z3_func_decl field = Z3_get_tuple_sort_field_decl(c, ty, i);
            if (i > 0) {
                fprintf(out, ", ");
            }
            display_sort(c, out, Z3_get_range(c, field));
        }
        fprintf(out, ")");
        break;
    }
    default:
        fprintf(out, "unknown[");
        display_symbol(c, out, Z3_get_sort_name(c, ty));
        fprintf(out, "]");
        break;
    }
}

/**
   \brief Custom ast pretty printer. 

   This function demonstrates how to use the API to navigate terms.
*/
void display_ast(Z3_context c, FILE * out, Z3_ast v) 
{
    switch (Z3_get_ast_kind(c, v)) {
    case Z3_NUMERAL_AST: {
        Z3_sort t;
        fprintf(out, Z3_get_numeral_string(c, v));
        t = Z3_get_sort(c, v);
        fprintf(out, ":");
        display_sort(c, out, t);
        break;
    }
    case Z3_APP_AST: {
        unsigned i;
        Z3_app app = Z3_to_app(c, v);
        unsigned num_fields = Z3_get_app_num_args(c, app);
        Z3_func_decl d = Z3_get_app_decl(c, app);
        fprintf(out, Z3_func_decl_to_string(c, d));
        if (num_fields > 0) {
            fprintf(out, "[");
            for (i = 0; i < num_fields; i++) {
                if (i > 0) {
                    fprintf(out, ", ");
                }
                display_ast(c, out, Z3_get_app_arg(c, app, i));
            }
            fprintf(out, "]");
        }
        break;
    }
    case Z3_QUANTIFIER_AST: {
        fprintf(out, "quantifier");
        ;	
    }
    default:
        fprintf(out, "#unknown");
    }
}


/**
   \brief Custom function interpretations pretty printer.
*/
void display_function_interpretations(Z3_context c, FILE * out, Z3_model m) 
{
    unsigned num_functions, i;

    fprintf(out, "function interpretations:\n");

    num_functions = Z3_get_model_num_funcs(c, m);
    for (i = 0; i < num_functions; i++) {
        Z3_func_decl fdecl;
        Z3_symbol name;
        Z3_ast func_else;
        unsigned num_entries, j;
        
        fdecl = Z3_get_model_func_decl(c, m, i);
        name = Z3_get_decl_name(c, fdecl);
        display_symbol(c, out, name);
        fprintf(out, " = {");
        num_entries = Z3_get_model_func_num_entries(c, m, i);
        for (j = 0; j < num_entries; j++) {
            unsigned num_args, k;
            if (j > 0) {
                fprintf(out, ", ");
            }
            num_args = Z3_get_model_func_entry_num_args(c, m, i, j);
            fprintf(out, "(");
            for (k = 0; k < num_args; k++) {
                if (k > 0) {
                    fprintf(out, ", ");
                }
                display_ast(c, out, Z3_get_model_func_entry_arg(c, m, i, j, k));
            }
            fprintf(out, "|->");
            display_ast(c, out, Z3_get_model_func_entry_value(c, m, i, j));
            fprintf(out, ")");
        }
        if (num_entries > 0) {
            fprintf(out, ", ");
        }
        fprintf(out, "(else|->");
        func_else = Z3_get_model_func_else(c, m, i);
        display_ast(c, out, func_else);
        fprintf(out, ")}\n");
    }
}

/**
   \brief Custom model pretty printer.
*/
void display_model(Z3_context c, FILE * out, Z3_model m) 
{
    unsigned num_constants;
    unsigned i;

    num_constants = Z3_get_model_num_constants(c, m);
    for (i = 0; i < num_constants; i++) {
        Z3_symbol name;
        Z3_func_decl cnst = Z3_get_model_constant(c, m, i);
        Z3_ast a, v;
        Z3_bool ok;
        name = Z3_get_decl_name(c, cnst);
        display_symbol(c, out, name);
        fprintf(out, " = ");
        a = Z3_mk_app(c, cnst, 0, 0);
        v = a;
        ok = Z3_eval(c, m, a, &v);
        display_ast(c, out, v);
        fprintf(out, "\n");
    }
    display_function_interpretations(c, out, m);
}

//////////////////////////////////////////////////////////////////////////////////////

static Z3_ast ParseStatement(Z3_context &ctx, map<var_t,Z3_ast>& vars, string& stmt, int *pos)
{
  Z3_ast pred[2];
  Z3_ast ret;

  DEBUG(fprintf(stderr, "%s: %s\n", __FUNCTION__, stmt.substr(*pos).c_str()));

  if (stmt[*pos] == '(') {
    /* statement */
    /* compare ops */
    *pos = *pos + 1;
    DEBUG(fprintf(stderr, "stmt[*pos] = %c\n", stmt[*pos]));
    if (!stmt.compare(*pos, 2, "= ")) {
      *pos = *pos + 3;
      pred[0] = ParseStatement(ctx, vars, stmt, pos);
      pred[1] = ParseStatement(ctx, vars, stmt, pos);
      ret = Z3_mk_eq(ctx, pred[0], pred[1]);
    } else if (!stmt.compare(*pos, 3, "not")) {
      *pos = *pos + 4;
      pred[0] = ParseStatement(ctx, vars, stmt, pos);
      ret = Z3_mk_not(ctx, pred[0]);
    } else if (!stmt.compare(*pos, 2, "> ")) {
      *pos = *pos + 3;
      pred[0] = ParseStatement(ctx, vars, stmt, pos);
      pred[1] = ParseStatement(ctx, vars, stmt, pos);
      ret = Z3_mk_gt(ctx, pred[0], pred[1]);
    } else if (!stmt.compare(*pos, 2, "<=")) {
      *pos = *pos + 3;
      pred[0] = ParseStatement(ctx, vars, stmt, pos);
      pred[1] = ParseStatement(ctx, vars, stmt, pos);
      ret = Z3_mk_le(ctx, pred[0], pred[1]);
    } else if (!stmt.compare(*pos, 2, "< ")) {
      *pos = *pos + 3;
      pred[0] = ParseStatement(ctx, vars, stmt, pos);
      pred[1] = ParseStatement(ctx, vars, stmt, pos);
      ret = Z3_mk_lt(ctx, pred[0], pred[1]);
    } else if (!stmt.compare(*pos, 2, ">=")) {
      *pos = *pos + 3;
      pred[0] = ParseStatement(ctx, vars, stmt, pos);
      pred[1] = ParseStatement(ctx, vars, stmt, pos);
      ret = Z3_mk_ge(ctx, pred[0], pred[1]);
    } else if (!stmt.compare(*pos, 2, "+ ")) {
      *pos = *pos + 2;
      pred[0] = ParseStatement(ctx, vars, stmt, pos);
      pred[1] = ParseStatement(ctx, vars, stmt, pos);
      ret = Z3_mk_add(ctx, 2, pred);
    } else if (!stmt.compare(*pos, 2, "- ")) {
      *pos = *pos + 2;
      pred[0] = ParseStatement(ctx, vars, stmt, pos);
      pred[1] = ParseStatement(ctx, vars, stmt, pos);
      DEBUG(fprintf(stderr, "left: %s\n", Z3_ast_to_string(ctx, pred[0])));
      DEBUG(fprintf(stderr, "right: %s\n", Z3_ast_to_string(ctx, pred[1]))); 
      ret = Z3_mk_sub(ctx, 2, pred);
    } else if (!stmt.compare(*pos, 2, "* ")) {
      *pos = *pos + 2;
      pred[0] = ParseStatement(ctx, vars, stmt, pos);
      pred[1] = ParseStatement(ctx, vars, stmt, pos);
      ret = Z3_mk_mul(ctx, 2, pred);
    } else if (!stmt.compare(*pos, 3, "div")) {
      *pos = *pos + 4;
      pred[0] = ParseStatement(ctx, vars, stmt, pos);
      pred[1] = ParseStatement(ctx, vars, stmt, pos);
      ret = Z3_mk_div(ctx, pred[0], pred[1]);
    } else if (!stmt.compare(*pos, 3, "mod")) {
      *pos = *pos + 4;
      pred[0] = ParseStatement(ctx, vars, stmt, pos);
      pred[1] = ParseStatement(ctx, vars, stmt, pos);
      ret = Z3_mk_mod(ctx, pred[0], pred[1]);
    } else {
      fprintf(stderr, "ERROR: unknown commands: %s\n", stmt.c_str());
    }
    /* close the bracket */
    int start = *pos;
    int endpos = stmt.find(')', *pos) + 2;
    *pos += (endpos - start);
  } else if(stmt[*pos] == 'x') {
    /* variable */
    var_t vid;
    int start = *pos;
    int end = stmt.find(' ', start);
    string val = stmt.substr(start+1, end-start);
    sscanf(val.c_str(), "%d", &vid);
    *pos =  *pos + (end - start) + 1;
    ret = vars[vid];
  } else if(stmt[*pos] >= '0' && stmt[*pos] <= '9') {
    /* constant */
    int start = *pos;
    int end = stmt.find(' ', start) + 1;
    *pos = *pos + (end - start);
    string val = stmt.substr(start, end-start);
    bool isDecimal = (val.find('.') != std::string::npos);
    Z3_sort ty;
    if (isDecimal)
		ty = Z3_mk_real_sort(ctx);
    else
		ty = Z3_mk_int_sort(ctx);
    ret = Z3_mk_numeral(ctx, const_cast<char*>(val.c_str()), ty);
  }

  DEBUG(fprintf(stderr, "AST: %s\n", Z3_ast_to_string(ctx, ret)));
  return ret;
}

bool Z3Solver::Solve(const map<var_t,type_t>& vars,
			const vector<const SymbolicPred*>& constraints,
			map<var_t,value_t>* soln) {

  typedef map<var_t,type_t>::const_iterator VarIt;

  Z3_context ctx_z3 = mk_context();
  Z3_sort int_ty_z3 = Z3_mk_int_sort(ctx_z3);
  Z3_sort real_ty_z3 = Z3_mk_real_sort(ctx_z3);
  assert(ctx_z3);

  // Type limits.
  vector<Z3_ast> min_expr_z3(types::LONG_LONG+1);
  vector<Z3_ast> max_expr_z3(types::LONG_LONG+1);

  for (int i = types::U_CHAR; i <= types::LONG_LONG; i++) {
    min_expr_z3[i] = Z3_mk_numeral(ctx_z3, const_cast<char*>(kMinValueStr[i]), int_ty_z3);
    max_expr_z3[i] = Z3_mk_numeral(ctx_z3, const_cast<char*>(kMaxValueStr[i]), int_ty_z3);
    assert(min_expr_z3[i]);
    assert(max_expr_z3[i]);
  }

  // Variable declarations.
  map<var_t,Z3_ast> x_expr_z3;

  for (VarIt i = vars.begin(); i != vars.end(); ++i) {
    char buff[32];
    Z3_ast min, max;
    sprintf(buff, "x%d", i->first); // Warning: Not safe
    if( i->second < types::DOUBLE ){
		x_expr_z3[i->first] = mk_var(ctx_z3, buff, int_ty_z3);
	}
	else{
		x_expr_z3[i->first] = mk_var(ctx_z3, buff, real_ty_z3);
	}
	
    
    min = Z3_mk_gt(ctx_z3, x_expr_z3[i->first], min_expr_z3[i->second]);
    max = Z3_mk_lt(ctx_z3, x_expr_z3[i->first], max_expr_z3[i->second]);

#if USE_RANGE_CHECK
    Z3_assert_cnstr(ctx_z3, min);
    Z3_assert_cnstr(ctx_z3, max);
    DEBUG(fprintf(stderr, "MIN AST: %s\n", Z3_ast_to_string(ctx_z3, min)));
    DEBUG(fprintf(stderr, "MAX AST: %s\n", Z3_ast_to_string(ctx_z3, max)));
#endif
  }

  Z3_ast zero_z3 = mk_int(ctx_z3, 0);
  assert(zero_z3);

  { // Constraints.
    vector<Z3_ast> terms_z3;
    for (PredIt i = constraints.begin(); i != constraints.end(); ++i) {
      // const SymbolicExpr& se = (*i)->expr();

      string s = "";
      (*i)->AppendToString(&s);
      DEBUG(fprintf(stderr, "pred: %s\n", s.c_str()));

      /*
	previous model:
	c1*v1 + c2*v2 + .... + cn*vn.
	new model:
	(cop stmt stmt)
	(bop stmt stmt)
	(uop stmt)
      */
      int pos = 0;
      Z3_ast pred_z3 = ParseStatement(ctx_z3, x_expr_z3, s, &pos);
      DEBUG(fprintf(stderr, "CHECK AST: %s\n", Z3_ast_to_string(ctx_z3, pred_z3)));
      Z3_assert_cnstr(ctx_z3, pred_z3);
    }
  }

  Z3_model model_z3 = 0;
  Z3_lbool success_z3 = Z3_check_and_get_model(ctx_z3, &model_z3);

  if (success_z3 == Z3_L_TRUE) {
    int num_constraints = Z3_get_model_num_constants(ctx_z3, model_z3);
    for (int i = 0; i < num_constraints; i++) {
        Z3_symbol name;
        Z3_func_decl cnst = Z3_get_model_constant(ctx_z3, model_z3, i);
        Z3_ast a, v;
        Z3_bool ok;

	DEBUG(display_model(ctx_z3, stderr, model_z3));

        name = Z3_get_decl_name(ctx_z3, cnst);
        a = Z3_mk_app(ctx_z3, cnst, 0, 0);
        v = a;
        ok = Z3_eval(ctx_z3, model_z3, a, &v);
	int idx;
	sscanf(Z3_get_symbol_string(ctx_z3, name), "x%d", &idx);
	long val = strtol(Z3_get_numeral_string(ctx_z3, v), NULL, 0);

	DEBUG(fprintf(stderr, "%s %s | x%d %ld\n",
		      Z3_get_symbol_string(ctx_z3, name),
		      Z3_get_numeral_string(ctx_z3, v),
		      idx, val));
	soln->insert(make_pair(idx, val));
    }
  } else if (success_z3 == Z3_L_FALSE) {
    DEBUG(fprintf(stderr, "ERR:  fail to solve\n"));
  } else {
    DEBUG(fprintf(stderr, "ERR: unknown\n"));
    DEBUG(display_model(ctx_z3, stderr, model_z3));
  }

  Z3_del_context(ctx_z3);
  return success_z3;
}

}  // namespace crest

