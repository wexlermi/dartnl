#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	if ((-3 * x) == 24) {
		printf("I am here at depth 6");
		if ((-8 * x) == -72) {
			printf("I am here at depth 5");
			if ((1 * x) == 2) {
				printf("I am here at depth 4");
				if ((-6 * x) == 12) {
					printf("I am here at depth 3");
					if ((-2 * x) == -14) {
						printf("I am here at depth 2");
						if ((-1 * x) == -8) {
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
