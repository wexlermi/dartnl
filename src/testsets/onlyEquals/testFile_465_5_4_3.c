#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	int             x3;
	if ((2 * x0 * x2) + (2 * x0) + (-19 * x1) + (-1 * x2) == 431986) {
		printf("I am here at depth 5");
		if ((-1 * x2 * x2 * x2) + (-1 * x1 * x2) == 470885278) {
			printf("I am here at depth 4");
			if ((2 * x1 * x3 * x3) + (-1 * x0 * x0) + (7 * x0 * x2) + (-5 * x2 * x2) == -907540361) {
				printf("I am here at depth 3");
				if ((-7 * x1 * x2 * x2) + (-1 * x1 * x3 * x3) + (-1 * x2 * x3 * x3) + (-1 * x1 * x1) + (-1 * x0) + (-3 * x3) == -3892276678) {
					printf("I am here at depth 2");
					if ((-2 * x0 * x0 * x3) + (3 * x3 * x3 * x3) == -1135219660) {
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
