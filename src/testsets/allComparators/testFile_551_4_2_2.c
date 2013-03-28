#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	if ((-17 * x1) >= 70) {
		printf("I am here at depth 4");
		if ((-2 * x0) + (2 * x1) > -42) {
			printf("I am here at depth 3");
			if ((-8 * x0 * x1) + (32 * x1 * x1) + (2 * x1) <= 1096) {
				printf("I am here at depth 2");
				if ((1 * x0 * x1) + (92 * x0) != 763) {
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
