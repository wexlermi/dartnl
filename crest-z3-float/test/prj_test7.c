#include <crest.h>
#include <stdio.h>
/*
  find_model_example2
  AST: (= (+ (* x0 x0) (* -1 49)) 0)
  AST: (= (+ 49 (* -1 (* x0 x0))) 0)
  AST: (= (+ (* x0 x0) (* -1 49)) 0)
*/
int main(int argc, char *argv[])
{
	int x;
	int y;
	CREST_int(x);
	CREST_int(y);
	if (x * x * y == 12) {
		printf("GOAL %d %d\n", x, y);
	}
	return 0;
}
