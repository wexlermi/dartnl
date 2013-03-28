#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	int             x4;
	if ((13 * x1 * x2 * x2 * x3) + (-1 * x1 * x1 * x3 * x3) + (2 * x2 * x3 * x3 * x4) + (1 * x0 * x0 * x4) + (-3 * x3 * x3 * x4) != 48807) {
		printf("I am here at depth 3");
		if ((2 * x0 * x1 * x1 * x2) + (-2 * x2 * x2 * x2) + (6 * x1 * x4 * x4) + (-4 * x3 * x3) == 344) {
			printf("I am here at depth 2");
			if ((-2 * x0 * x0 * x0 * x1) + (1 * x0 * x1 * x1 * x1) + (-2 * x0 * x1 * x1 * x3) + (2 * x0 * x3 * x3 * x3) + (-2 * x0 * x1 * x1 * x4) + (1 * x2 * x3 * x4 * x4) + (-2 * x0 * x1 * x1) + (4 * x0 * x2 * x4) != 27866) {
				printf("I am here at depth 1");

			} else {
				printf("I am at the else of depth 1");
			}
		} else {
			printf("I am at the else of depth 2");
		}
	} else {
		printf("I am at the else of depth 3");
	}
}
