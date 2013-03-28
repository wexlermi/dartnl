#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	if ((20 * x0 * x0 * x0 * x1 * x2 * x3) + (-9 * x0 * x2 * x2 * x2 * x2 * x3) + (3 * x0 * x0 * x2 * x2 * x3 * x3) + (4 * x1 * x1 * x2 * x2 * x3 * x3) + (-7 * x0 * x0 * x1 * x1) + (1 * x2 * x2 * x2 * x2) + (-5 * x0 * x0 * x0) + (-9 * 1) <= 464) {
		printf("I am here at depth 2");
		if ((1 * x0 * x1 * x1 * x1 * x2 * x3) + (-4 * x1 * x3 * x3 * x3 * x3 * x3) + (-1 * x0 * x1 * x2 * x3) == 1300608) {
			printf("I am here at depth 1");

		} else {
			printf("I am at the else of depth 1");
		}
	} else {
		printf("I am at the else of depth 2");
	}
}
