#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	if ((-1 * x1 * x3) + (-1 * x3 * x3) > -54) {
		printf("I am here at depth 4");
		if ((1 * x0 * x3 * x3) == 3) {
			printf("I am here at depth 3");
			if ((1 * x0 * x0) + (2 * x2 * x3) < 18) {
				printf("I am here at depth 2");
				if ((2 * x0 * x0 * x1) + (1 * x0 * x0) > -60) {
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
