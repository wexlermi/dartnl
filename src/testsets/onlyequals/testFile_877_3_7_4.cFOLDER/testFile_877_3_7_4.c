#include <crest.h>
#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	CREST_int(x0);
	int             x1;
	CREST_int(x1);
	int             x2;
	CREST_int(x2);
	int             x3;
	CREST_int(x3);
	int             x4;
	CREST_int(x4);
	int             x5;
	CREST_int(x5);
	int             x6;
	CREST_int(x6);
	if ((1 * x0 * x0 * x4 * x6) + (25 * x1 * x4 * x4) + (-1 * x3 * x3 * x6) == -8300) {
		printf("I am here at depth 3");
		if ((4 * x0 * x0 * x2 * x3) + (-5 * x1 * x1 * x5) + (-20 * x4 * x6) == -14756) {
			printf("I am here at depth 2");
			if ((-3 * x2 * x2 * x2 * x3) + (-14 * x2 * x2 * x3 * x5) + (-8 * x2 * x2 * x5 * x5) + (-7 * x0 * x1 * x6) == -7428) {
				printf("I am here at depth 1");

			} else {
				printf("I am at the else of depth 1");
			}
		} else {
			printf("I am at the else of depth 2");
		}
	} else {
		printf("I am at the else of depth 3");
	}
}
