#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	int             x4;
	if ((2 * x0 * x0 * x0 * x0 * x0 * x1) + (1 * x0 * x1 * x1 * x1 * x2 * x3) + (-1 * x0 * x1 * x1 * x2 * x2 * x3) + (2 * x1 * x1 * x1 * x2 * x2 * x3) + (-2 * x0 * x0 * x0 * x3 * x3 * x3) + (1 * x0 * x0 * x1 * x3 * x3 * x3) + (-1 * x1 * x2 * x3 * x3 * x3 * x3) + (-20 * x0 * x3 * x4 * x4 * x4 * x4) + (1 * x2 * x2 * x2 * x2 * x4) + (-1 * x1 * x3 * x3 * x4 * x4) + (1 * x0 * x0 * x1 * x1) + (16 * x0 * x2 * x3) == 24288) {
		printf("I am here at depth 1");

	} else {
		printf("I am at the else of depth 1");
	}
}
