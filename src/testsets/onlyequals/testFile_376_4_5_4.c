#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	int             x4;
	if ((1 * x1 * x1 * x1 * x2) + (1 * x2 * x2 * x3 * x3) + (3 * x2 * x2 * x2) + (5 * x0 * x0 * x3) + (-1 * x0) + (-3 * x4) == -724) {
		printf("I am here at depth 4");
		if ((-21 * x0 * x0 * x1 * x1) + (-1 * x0 * x0 * x1 * x2) + (-1 * x0 * x2 * x2 * x2) + (-1 * x1 * x1 * x3 * x4) + (1 * x0 * x2 * x3 * x4) + (1 * x3 * x3 * x3 * x4) + (-1 * x3 * x3 * x4 * x4) + (1 * x1 * x3) + (1 * x4) == -11605) {
			printf("I am here at depth 3");
			if ((1 * x1 * x1 * x4 * x4) + (-1 * x3 * x3 * x4) == 0) {
				printf("I am here at depth 2");
				if ((1 * x1 * x1 * x2 * x2) + (-15 * x1 * x1 * x1 * x4) + (1 * x1 * x1 * x2 * x4) + (5 * x1 * x2 * x3 * x4) + (11 * x1 * x2 * x2) + (-2 * x0 * x2 * x3) + (-7 * x3) == -6747) {
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
	} else {
		printf("I am at the else of depth 4");
	}
}