#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	if ((22 * x1 * x1 * x1) + (9 * x0 * x1 * x3) + (1 * x0 * x0) + (-1 * x1 * x3) == -2961018128) {
		printf("I am here at depth 3");
		if ((2 * x1 * x1 * x1) + (4 * x0 * x1 * x2) + (-2 * x1 * x2 * x2) + (-4 * x0 * x0 * x3) + (1 * x0 * x1 * x3) == -801588702) {
			printf("I am here at depth 2");
			if ((1 * x1 * x2 * x2) + (5 * x1 * x1) == -64609083) {
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
