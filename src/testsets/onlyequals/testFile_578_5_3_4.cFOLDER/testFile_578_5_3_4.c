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
	if ((1 * x1 * x1 * x1 * x1) + (-24 * x0 * x0 * x0 * x2) + (-1 * x0 * x0 * x1 * x2) + (-1 * x1 * x1 * x1 * x2) + (1 * x2 * x2 * x2 * x2) + (-1 * x1 * x2 * x2) + (-1 * x0 * x2) == 220032) {
		printf("I am here at depth 5");
		if ((2 * x0 * x0 * x1 * x1) + (1 * x0 * x0 * x1 * x2) + (-1 * x0 * x1 * x1 * x2) + (-1 * x1 * x1) + (3 * x0) == 1188) {
			printf("I am here at depth 4");
			if ((2 * x0 * x0 * x1 * x1) + (1 * x0 * x1 * x1 * x1) + (2 * x0 * x1 * x1) + (-4 * x2 * x2 * x2) + (-1 * x0 * x0) + (-1 * x0 * x2) + (-4 * x2) == -2959) {
				printf("I am here at depth 3");
				if ((-1 * x1 * x1 * x2 * x2) + (1 * x0 * x0 * x1) + (1 * x0 * x1) == -100) {
					printf("I am here at depth 2");
					if ((-5 * x0 * x1 * x1 * x1) + (-2 * x1 * x1 * x1) + (-17 * x1 * x2 * x2) + (3 * x2 * x2) + (-1 * x1) == -5717) {
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
