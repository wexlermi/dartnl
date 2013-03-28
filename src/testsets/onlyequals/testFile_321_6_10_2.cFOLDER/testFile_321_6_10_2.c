#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	int             x4;
	int             x5;
	int             x6;
	int             x7;
	int             x8;
	int             x9;
	if ((2 * x0 * x5) == 90) {
		printf("I am here at depth 6");
		if ((-2 * x0) == 8) {
			printf("I am here at depth 5");
			if ((-10 * x3 * x7) + (2 * x8) == -20) {
				printf("I am here at depth 4");
				if ((5 * x8 * x8) == 180) {
					printf("I am here at depth 3");
					if ((-1 * x5) == 8) {
						printf("I am here at depth 2");
						if ((-1 * x8 * x8) == -49) {
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
