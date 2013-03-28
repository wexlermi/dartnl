#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	if ((3 * x0 * x0) + (2 * x1 * x1) + (-26 * x2) == 410) {
		printf("I am here at depth 6");
		if ((2 * x0 * x0 * x1) + (1 * x1 * x2 * x2) + (-8 * x2 * x2) + (2 * x0) == -1149) {
			printf("I am here at depth 5");
			if ((1 * x1 * x2 * x2) + (1 * x3 * x3) + (9 * x1) != 309) {
				printf("I am here at depth 4");
				if ((-2 * x0 * x1 * x1) + (12 * x1 * x1 * x2) + (-1 * x1 * x2 * x2) + (-8 * x1 * x1 * x3) + (-1 * x1 * x2) != 1576) {
					printf("I am here at depth 3");
					if ((1 * x0 * x1 * x2) + (14 * x0 * x1 * x3) + (1 * x2 * x3 * x3) + (-1 * x0 * x1) + (262 * x3) != 3121) {
						printf("I am here at depth 2");
						if ((-6 * x0 * x0 * x1) + (-2 * x1 * x3) + (1 * x3 * x3) + (1 * x1) != 515) {
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
