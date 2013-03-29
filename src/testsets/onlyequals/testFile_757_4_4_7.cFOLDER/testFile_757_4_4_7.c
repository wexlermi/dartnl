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
	if ((-1 * x0 * x0 * x0 * x2 * x2) + (4 * x0 * x1 * x3 * x3) == 24832) {
		printf("I am here at depth 4");
		if ((1 * x1 * x1 * x1 * x1 * x1 * x2 * x2) + (3 * x0 * x1 * x1 * x1 * x2 * x2 * x2) + (-1 * x1 * x1 * x1 * x2 * x2 * x2 * x2) + (-2 * x2 * x2 * x2 * x2 * x2 * x2 * x2) + (1 * x0 * x0 * x0 * x0 * x0 * x1 * x3) + (1 * x0 * x0 * x0 * x0 * x1 * x1 * x3) + (2 * x0 * x0 * x0 * x1 * x1 * x1 * x3) + (-2 * x0 * x1 * x1 * x1 * x1 * x1 * x3) + (1 * x1 * x1 * x1 * x1 * x1 * x1 * x3) + (6 * x0 * x1 * x1 * x1 * x2 * x2 * x3) + (5 * x1 * x1 * x2 * x2 * x2 * x2 * x3) + (3 * x0 * x2 * x2 * x2 * x2 * x2 * x3) + (-16 * x1 * x1 * x2 * x2 * x2 * x3 * x3) + (-1 * x0 * x2 * x2 * x2 * x2 * x3 * x3) + (-1 * x1 * x1 * x1 * x2 * x3 * x3 * x3) + (-1 * x0 * x1 * x1 * x2 * x2 * x3) + (1 * x0 * x1 * x1 * x1 * x3 * x3) + (-4 * x1 * x1 * x2 * x2 * x3 * x3) + (1 * x0 * x0 * x1 * x1 * x3) + (12 * x2 * x2 * x2 * x2 * x3) + (-1 * x0 * x3 * x3 * x3 * x3) + (-2 * x0 * x0 * x1 * x3) + (-2 * x0 * x1 * x1) + (1 * x0 * x2 * x2) == -2651) {
			printf("I am here at depth 3");
			if ((-1 * x0 * x0 * x1 * x1 * x1 * x2 * x2) + (-3 * x1 * x1 * x1 * x2 * x2 * x3 * x3) + (9819 * x0 * x3 * x3 * x3) + (-2 * x0 * x3) == -78551840) {
				printf("I am here at depth 2");
				if ((2 * x0 * x0 * x0 * x0 * x0 * x0 * x3) + (1 * x0 * x1 * x1 * x3 * x3 * x3 * x3) + (-1 * x0 * x1 * x3 * x3 * x3 * x3) + (-1 * x1 * x1 * x3 * x3 * x3) + (1 * x1 * x3 * x3 * x3) + (1 * x0 * x0 * x1) + (28 * x0 * x0 * x3) + (-2 * x2 * x3 * x3) + (2 * 1) == 5762) {
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