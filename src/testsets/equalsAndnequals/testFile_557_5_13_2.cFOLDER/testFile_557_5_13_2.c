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
	int             x10;
	int             x11;
	int             x12;
	if ((1 * x2 * x5) + (-2 * x3 * x6) == 86) {
		printf("I am here at depth 5");
		if ((1 * x1 * x4) + (1 * x4 * x12) + (-1 * x8) == -20) {
			printf("I am here at depth 4");
			if ((1 * x2 * x4) + (1 * x10 * x12) == 12) {
				printf("I am here at depth 3");
				if ((-4 * x11 * x12) != -321) {
					printf("I am here at depth 2");
					if ((-1 * x4 * x5) + (1 * x5 * x9) + (1 * x4 * x11) == 22) {
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
