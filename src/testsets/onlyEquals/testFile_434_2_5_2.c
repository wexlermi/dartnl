#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	int             x4;
	if ((4 * x0 * x2) + (-1 * x4 * x4) + (1 * x0) == 2308258) {
		printf("I am here at depth 2");
		if ((7 * x1 * x3) + (-1 * x4 * x4) == -3432577) {
			printf("I am here at depth 1");

		} else {
			printf("I am at the else of depth 1");
		}
	} else {
		printf("I am at the else of depth 2");
	}
}
