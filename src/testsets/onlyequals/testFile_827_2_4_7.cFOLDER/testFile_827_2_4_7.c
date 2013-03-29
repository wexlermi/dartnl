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
	if ((1 * x0 * x0 * x0 * x0 * x0 * x1 * x1) + (1 * x0 * x0 * x0 * x2 * x2 * x3 * x3) + (7 * x0 * x0 * x0 * x0 * x0 * x1) + (-6 * x0 * x0 * x0 * x0 * x1 * x1) + (1 * x0 * x0 * x0 * x1 * x1 * x1) + (-1 * x0 * x1 * x1 * x2 * x2 * x2) + (-1 * x1 * x1 * x1 * x3 * x3 * x3) + (-1 * x0 * x1 * x1 * x2 * x2) + (-10 * x1 * x1 * x3 * x3 * x3) + (-1 * x0 * x0 * x0 * x2) == 9465) {
		printf("I am here at depth 2");
		if ((1 * x0 * x0 * x1 * x1 * x1 * x1 * x2) + (-1 * x0 * x1 * x1 * x1 * x1 * x2 * x2) + (1 * x0 * x0 * x1 * x1 * x2 * x3 * x3) + (4 * x0 * x0 * x0 * x2 * x2 * x3 * x3) + (3 * x1 * x1 * x2 * x2 * x2 * x3 * x3) + (2 * x0 * x2 * x2 * x2 * x2 * x3 * x3) + (-1 * x1 * x2 * x2 * x2 * x2 * x3 * x3) + (-1 * x1 * x2 * x3 * x3 * x3 * x3 * x3) + (1 * x1 * x1 * x1 * x1 * x1 * x1) + (7 * x0 * x0 * x1 * x2 * x2 * x3) + (1 * x2 * x2 * x2 * x2 * x2 * x3) + (130 * x0 * x0 * x0 * x0 * x3 * x3) + (-1 * x1 * x1 * x1 * x2 * x3 * x3) + (6 * x0 * x1 * x1 * x3 * x3) + (-1 * x1 * x3 * x3 * x3 * x3) + (-4 * x0 * x0 * x0 * x0) + (1 * x0 * x0 * x1 * x3) + (1 * x1 * x1 * x3 * x3) + (8 * x0 * x3 * x3 * x3) == 34024913) {
			printf("I am here at depth 1");

		} else {
			printf("I am at the else of depth 1");
		}
	} else {
		printf("I am at the else of depth 2");
	}
}
