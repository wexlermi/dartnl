#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	if ((-2 * x0 * x1 * x1) + (4 * x0 * x0) == 132) {
		printf("I am here at depth 6");
		if ((18 * x0 * x0 * x0) + (1 * x0 * x0 * x1) + (7 * x0 * x1 * x1) + (3 * x1 * x1 * x1) + (12 * x1 * x1) == 9) {
			printf("I am here at depth 5");
			if ((-3 * x0 * x1 * x1) + (-12 * x1 * x1 * x1) == -1725) {
				printf("I am here at depth 4");
				if ((2 * x0 * x1) == 18) {
					printf("I am here at depth 3");
					if ((1 * x1 * x1) + (-2 * x0) == -17) {
						printf("I am here at depth 2");
						if ((-1 * x0 * x1) == 25) {
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
	} else {
		printf("I am at the else of depth 6");
	}
}
