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
	int z;
	CREST_int(x);
	CREST_int(y);
	CREST_int(z);
	if (x*y + z + 1 == 0 && x * z - 1 == 0 && x > 0 && z > 0) {
		printf("GOAL %d %d %d\n", x, y, z);
	}
	return 0;
}
