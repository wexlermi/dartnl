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
	int             x7;
	CREST_int(x7);
	int             x8;
	CREST_int(x8);
	int             x9;
	CREST_int(x9);
	if ((1 * x4 * x4 * x4 * x5) + (1 * x0 * x2 * x4 * x6) + (-1 * x4 * x5 * x5 * x6) + (-2 * x5 * x6 * x7 * x8) + (2 * x3 * x5 * x5) + (-1 * x7 * x7 * x7) + (-15 * x6 * x6 * x8) + (2 * x5 * x6 * x9) == -2304) {
		printf("I am here at depth 2");
		if ((1 * x0 * x1 * x6 * x8) + (3 * x1 * x4 * x4 * x9) + (1 * x0 * x1 * x1) + (1 * x2 * x3 * x3) + (3 * x3 * x6 * x6) + (-3 * x2 * x2 * x8) + (-1 * x0 * x3 * x8) + (-3 * x5 * x8 * x9) == 300) {
			printf("I am here at depth 1");

		} else {
			printf("I am at the else of depth 1");
		}
	} else {
		printf("I am at the else of depth 2");
	}
}