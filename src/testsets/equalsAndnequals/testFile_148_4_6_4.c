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
	if ((1 * x2 * x3 * x4 * x4) + (2 * x3 * x3 * x4 * x4) + (1 * x0 * x1 * x5 * x5) + (-2 * x4 * x5 * x5 * x5) + (4 * x5 * x5 * x5 * x5) + (1 * x1 * x1 * x3) + (2 * x3 * x4 * x4) + (-1 * x0 * x1) == 7928) {
		printf("I am here at depth 4");
		if ((-2 * x1 * x1 * x1 * x1) + (11 * x1 * x1 * x1 * x3) + (1 * x3 * x3 * x3 * x4) + (2 * x2 * x5 * x5 * x5) + (-2 * x1 * x1 * x3) + (-22 * x0 * x1 * x4) + (1 * x3 * x4 * x5) + (2 * x5 * x5) + (1 * x0) != 11374) {
			printf("I am here at depth 3");
			if ((3 * x0 * x0 * x1 * x3) + (-4 * x0 * x3 * x3 * x3) + (2 * x3 * x4 * x4 * x4) + (4 * x1 * x1 * x4 * x5) + (1 * x2 * x4 * x5 * x5) + (-1 * x2 * x2 * x4) + (3 * x0 * x3 * x4) != -22952) {
				printf("I am here at depth 2");
				if ((1 * x0 * x1 * x1 * x3) + (-6 * x1 * x2 * x3 * x3) + (4 * x2 * x2 * x4 * x4) + (1 * x3 * x3 * x4 * x4) + (4 * x3 * x4 * x4 * x4) + (2 * x2 * x2 * x4 * x5) + (1 * x0 * x0 * x4) + (1 * x3 * x3 * x4) != 56557) {
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
}
