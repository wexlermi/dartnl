#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	if ((2 * x0 * x1 * x2) + (-1 * x1 * x1 * x2) + (-1 * x0 * x2 * x2) <= -119) {
		printf("I am here at depth 6");
		if ((1 * x1 * x2 * x2) <= -400) {
			printf("I am here at depth 5");
			if ((2 * x0 * x0 * x2) + (9 * x0 * x1 * x2) + (2 * x0 * x2 * x2) + (4 * x0 * x1) + (-1 * x0) <= -421) {
				printf("I am here at depth 4");
				if ((4 * x0 * x0 * x1) + (1 * x0 * x2 * x2) + (1 * x0 * x1) + (2 * x1 * x1) + (1 * x1) + (1 * 1) <= -123) {
					printf("I am here at depth 3");
					if ((-1 * x0 * x2) + (3 * x1 * x2) + (-12 * x2 * x2) + (-51 * x0) + (-2 * 1) != 406) {
						printf("I am here at depth 2");
						if ((-1 * x2 * x2 * x2) + (-2 * 1) == 510) {
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
