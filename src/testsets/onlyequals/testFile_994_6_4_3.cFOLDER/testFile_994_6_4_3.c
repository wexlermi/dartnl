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
	int             x3;
	CREST_int(x3);
	if ((-6 * x1 * x2 * x3) == -1200) {
		printf("I am here at depth 6");
		if ((1 * x0 * x2 * x2) + (1 * x0 * x0) + (1 * x0 * x2) == -460) {
			printf("I am here at depth 5");
			if ((1 * x1 * x1 * x2) + (-7 * x0 * x1 * x3) + (-18 * x0 * x2 * x3) + (1 * x3 * x3 * x3) + (1 * x2 * x2) + (-9 * x1 * x3) == -3589) {
				printf("I am here at depth 4");
				if ((2 * x0 * x2 * x2) + (-1 * x1 * x1 * x3) + (-162 * x1 * x3) == 784) {
					printf("I am here at depth 3");
					if ((12 * x0 * x1 * x2) + (-2 * x0 * x3) + (-4 * x3) == 2712) {
						printf("I am here at depth 2");
						if ((-3 * x0 * x1 * x1) + (-1 * x0 * x2 * x3) + (-1 * x0 * x2) + (-1 * x3) == -196) {
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
