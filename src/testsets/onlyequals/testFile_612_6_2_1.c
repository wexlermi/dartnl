#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	int             x1;
	if ((-1 * x1) == -8) {
		printf("I am here at depth 6");
		if ((-2 * x1) == 14) {
			printf("I am here at depth 5");
			if ((1 * x1) == 9) {
				printf("I am here at depth 4");
				if ((2 * 1) == 2) {
					printf("I am here at depth 3");
					if ((-5 * 1) == -5) {
						printf("I am here at depth 2");
						if ((-5 * 1) == -5) {
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
