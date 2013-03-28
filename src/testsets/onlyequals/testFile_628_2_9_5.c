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
	if ((4 * x0 * x2 * x2 * x2 * x6) == -1728) {
		printf("I am here at depth 2");
		if ((-2 * x3 * x4 * x5 * x6 * x6) + (2 * x2 * x4 * x4 * x6) == -3120) {
			printf("I am here at depth 1");

		} else {
			printf("I am at the else of depth 1");
		}
	} else {
		printf("I am at the else of depth 2");
	}
}
