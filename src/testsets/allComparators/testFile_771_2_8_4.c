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
	if ((1 * x0 * x4 * x5 * x5) + (1 * x0 * x0 * x6 * x7) + (-1 * x6 * x6 * x7 * x7) + (1 * x1 * x2 * x2) + (-3 * x2 * x5 * x7) > -866) {
		printf("I am here at depth 2");
		if ((1 * x0 * x1 * x1 * x2) + (15 * x0 * x0 * x6 * x6) + (-76 * x0 * x2 * x3 * x7) + (-6 * x0 * x3 * x5 * x7) + (1 * x2 * x3 * x6 * x7) + (1 * x1 * x6 * x6 * x7) + (3 * x1 * x3 * x6) >= -138667) {
			printf("I am here at depth 1");

		} else {
			printf("I am at the else of depth 1");
		}
	} else {
		printf("I am at the else of depth 2");
	}
}
