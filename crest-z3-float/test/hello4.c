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
	
	CREST_int(w);
	CREST_int(x);
	CREST_int(y);
	CREST_int(z);
	//x=2;
	//y=3;
	//z=5;
	//w =7;
	if (x*x*y*y*y*z*z == 2700){
		if (x*x*y*w + y*y*w*w == 525){
			if ( x * y*w+y*y*y*w*w==1365){
				printf("GOAL %d %d %d %d\n", x, y, z, w);
				return 1;
			}
		}
	}
	//printf("abc");
	return 0;
}
