#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	int             x4;
	if ((-5 * x0 * x0 * x2) + (-2 * x0 * x1 * x3) + (-1 * x1 * x2) + (4 * x2 * x4) < -2347) {
		printf("I am here at depth 5");
		if ((2 * x0 * x0 * x4) + (-1 * x2 * x3 * x4) + (-1 * x3 * x3) + (1 * x1 * x4) <= 123) {
			printf("I am here at depth 4");
			if ((-1 * x3 * x4 * x4) + (-2 * x3 * x3) + (1 * x3) + (-1 * 1) > 31) {
				printf("I am here at depth 3");
				if ((5 * x0 * x1 * x4) < 1040) {
					printf("I am here at depth 2");
					if ((1 * x3 * x4 * x4) < -481) {
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
	} else {
		printf("I am at the else of depth 5");
	}
}
