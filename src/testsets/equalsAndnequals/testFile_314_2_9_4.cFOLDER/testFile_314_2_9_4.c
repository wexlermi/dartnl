#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	int             x4;
	int             x5;
	int             x6;
	int             x7;
	int             x8;
	if ((2 * x0 * x1 * x3 * x4) + (2 * x0 * x2 * x4 * x6) + (3 * x3 * x3 * x5) + (-4 * x1 * x7 * x8) != -1038) {
		printf("I am here at depth 2");
		if ((-3 * x1 * x6 * x6 * x6) + (1 * x2 * x3 * x5 * x8) + (13 * x2 * x2 * x6 * x8) + (3 * x2 * x7 * x7 * x8) + (1 * x0 * x0 * x2) != -13282) {
			printf("I am here at depth 1");

		} else {
			printf("I am at the else of depth 1");
		}
	} else {
		printf("I am at the else of depth 2");
	}
}
