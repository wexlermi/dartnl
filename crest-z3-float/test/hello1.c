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
	int w;
	int x;
	int y;
	int z;
	
	CREST_int(x);
	CREST_int(y);
	CREST_int(z);
	CREST_int(w);
	if (x*y + z == 0){
			w = x*y*z;
			if (w == z + x*x*y){
				printf("GOAL %d %d %d %d\n", x, y, z, w);
				return 1;
			}
    }	
	return 0;
}
