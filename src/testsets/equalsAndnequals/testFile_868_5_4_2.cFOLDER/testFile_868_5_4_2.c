#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	if ((-2 * x2) == 20) {
		printf("I am here at depth 5");
		if ((2 * x3 * x3) != 31) {
			printf("I am here at depth 4");
			if ((6 * x0) == 6) {
				printf("I am here at depth 3");
				if ((-7 * x1 * x1) + (35 * x3 * x3) + (-5 * x1) == 17) {
					printf("I am here at depth 2");
					if ((-5 * x1 * x2) != -101) {
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
