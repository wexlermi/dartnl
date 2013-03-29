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
	if ((1 * x0 * x0 * x0 * x0 * x0 * x1 * x1 * x1) + (-1 * x0 * x0 * x0 * x2 * x2 * x2 * x2 * x2) + (-1 * x1 * x1 * x2 * x2 * x2 * x2 * x2 * x2) + (-3 * x0 * x0 * x0 * x0 * x1 * x1 * x1) + (-1 * x0 * x1 * x1 * x1 * x1 * x1 * x1) + (2 * x0 * x0 * x1 * x1) + (1 * x1 * x1 * x1 * x2) + (-5 * x1 * x1 * x2 * x2) + (2 * x1 * x2) + (-3 * x2 * x2) == -13371982) {
		printf("I am here at depth 2");
		if ((7 * x0 * x0 * x0 * x0 * x0 * x1 * x2) + (97 * x0 * x0 * x0) == 0) {
			printf("I am here at depth 1");

		} else {
			printf("I am at the else of depth 1");
		}
	} else {
		printf("I am at the else of depth 2");
	}
}
