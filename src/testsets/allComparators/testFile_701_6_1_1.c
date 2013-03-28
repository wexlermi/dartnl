#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	if ((5 * x) >= -51) {
		printf("I am here at depth 6");
		if ((1 * x) < 8) {
			printf("I am here at depth 5");
			if ((-2 * x) >= -100) {
				printf("I am here at depth 4");
				if ((1 * x) <= 82) {
					printf("I am here at depth 3");
					if ((-3 * x) > -27) {
						printf("I am here at depth 2");
						if ((1 * x) != -80) {
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
