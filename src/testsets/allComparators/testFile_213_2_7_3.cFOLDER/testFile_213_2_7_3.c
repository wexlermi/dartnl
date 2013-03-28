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
	if ((-1 * x0 * x0 * x2) + (2 * x2 * x2 * x2) + (-3 * x2 * x4 * x4) + (-2 * x0 * x2 * x5) + (-2 * x2 * x2 * x5) < 99) {
		printf("I am here at depth 2");
		if ((2 * x0 * x2 * x3) + (-6 * x2 * x5 * x6) + (4 * x2 * x5) > -334) {
			printf("I am here at depth 1");

		} else {
			printf("I am at the else of depth 1");
		}
	} else {
		printf("I am at the else of depth 2");
	}
}
