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
	int             x9;
	int             x10;
	if ((-1 * x1 * x6) + (1 * x4 * x6) + (2 * x2 * x7) > -135) {
		printf("I am here at depth 2");
		if ((-1 * x4 * x5) + (1 * x5 * x7) + (-1 * x4 * x8) < 123) {
			printf("I am here at depth 1");

		} else {
			printf("I am at the else of depth 1");
		}
	} else {
		printf("I am at the else of depth 2");
	}
}
