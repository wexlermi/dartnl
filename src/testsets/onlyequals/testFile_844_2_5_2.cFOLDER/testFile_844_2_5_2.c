#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	int             x4;
	if ((3 * x1 * x2) + (1 * x0 * x4) + (13 * x4 * x4) == 452) {
		printf("I am here at depth 2");
		if ((1 * x0 * x3) + (-1 * x0) + (-1 * 1) == 14) {
			printf("I am here at depth 1");

		} else {
			printf("I am at the else of depth 1");
		}
	} else {
		printf("I am at the else of depth 2");
	}
}
