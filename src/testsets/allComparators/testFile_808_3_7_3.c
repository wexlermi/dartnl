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
	if ((14 * x1 * x2 * x4) + (-1 * x0 * x0 * x6) >= -86) {
		printf("I am here at depth 3");
		if ((-3 * x1 * x3 * x5) > -89) {
			printf("I am here at depth 2");
			if ((1 * x4 * x4 * x5) + (8 * x0 * x6 * x6) != -530) {
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
}