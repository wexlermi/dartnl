#include <crest.h>
#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	CREST_int(x0);
	int             x1;
	CREST_int(x1);
	int             x2;
	CREST_int(x2);
	if ((4 * x1) == -24) {
		printf("I am here at depth 6");
		if ((-36 * x1 * x2) == 1008) {
			printf("I am here at depth 5");
			if ((-6 * x1 * x2) == 120) {
				printf("I am here at depth 4");
				if ((-3 * x1 * x1) + (-1 * x1 * x2) == 0) {
					printf("I am here at depth 3");
					if ((1 * x0 * x2) + (6 * x1) == -24) {
						printf("I am here at depth 2");
						if ((-6 * x2) == 24) {
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
