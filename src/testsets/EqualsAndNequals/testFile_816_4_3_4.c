#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	int             x2;
	if ((-4 * x0 * x0 * x1 * x1) + (-3 * x0 * x2) != -81674648949) {
		printf("I am here at depth 4");
		if ((-2 * x0 * x0 * x1 * x2) + (-3 * x0 * x1 * x1 * x2) + (1 * x1 * x1 * x1 * x2) + (-5 * x0 * x1 * x1) + (-1 * x0 * x0 * x2) + (-1 * x1 * x2) + (-1 * x2 * x2) + (-202 * x1) != -613705476497) {
			printf("I am here at depth 3");
			if ((-3 * x0 * x0 * x1 * x1) + (3 * x1 * x1 * x2) + (3 * x2 * x2) != -3518636677) {
				printf("I am here at depth 2");
				if ((2 * x1 * x1 * x1 * x1) + (-1 * x2 * x2 * x2) != -228249274) {
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
