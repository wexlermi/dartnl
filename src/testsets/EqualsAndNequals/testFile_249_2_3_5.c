#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	if ((2 * x0 * x1 * x1 * x1 * x1) + (1 * x1 * x1 * x1 * x2 * x2) + (-31 * x0 * x0 * x0 * x0) + (-9 * x0 * x1 * x1 * x1) + (-1 * x0 * x0 * x2 * x2) + (16 * x0 * x0 * x0) + (-1 * x2 * x2 * x2) + (-29 * x1 * x2) != -14065428479604) {
		printf("I am here at depth 2");
		if ((2 * x1 * x1 * x1 * x2 * x2) + (-1 * x0 * x0 * x2) + (1 * x1 * x2) != 19402993370519) {
			printf("I am here at depth 1");

		} else {
			printf("I am at the else of depth 1");
		}
	} else {
		printf("I am at the else of depth 2");
	}
}
