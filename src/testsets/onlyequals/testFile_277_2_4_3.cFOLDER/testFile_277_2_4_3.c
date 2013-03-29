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
	if ((6 * x1 * x1 * x1) + (-1 * x1 * x1 * x2) + (1 * x0 * x2 * x2) + (30 * x3 * x3) == 1856) {
		printf("I am here at depth 2");
		if ((8 * x0 * x0 * x3) + (150 * x0 * x3 * x3) + (-4 * x1 * x3) == -37134) {
			printf("I am here at depth 1");

		} else {
			printf("I am at the else of depth 1");
		}
	} else {
		printf("I am at the else of depth 2");
	}
}
