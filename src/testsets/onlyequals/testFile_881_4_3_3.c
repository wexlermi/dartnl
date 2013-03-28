#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	if ((1 * x0 * x1) + (-1 * x1 * x1) + (1 * x0 * x2) + (-51 * x0) + (-1 * 1) == 170) {
		printf("I am here at depth 4");
		if ((-10 * x0 * x1 * x1) + (-4 * x0 * x0 * x2) + (1 * x0 * x2) + (1 * x2) == -4480) {
			printf("I am here at depth 3");
			if (== 0) {
				printf("I am here at depth 2");
				if ((6 * x0 * x0 * x1) + (4 * x0 * x1 * x1) + (-5 * x0 * x1) == -460) {
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
