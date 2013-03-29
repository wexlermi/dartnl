#include <crest.h>
#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	CREST_int(x0);
	int             x1;
	CREST_int(x1);
	if ((1 * x0 * x0 * x0 * x0 * x0 * x0 * x1) + (1 * x0 * x1 * x1 * x1 * x1 * x1 * x1) + (1 * x1 * x1 * x1 * x1 * x1 * x1 * x1) + (4 * x0 * x0 * x0 * x0 * x0 * x0) + (2 * x0 * x0 * x0 * x0 * x1 * x1) + (1 * x0 * x0 * x0 * x0 * x0) + (1 * x0 * x0 * x1 * x1 * x1) + (1 * x0 * x1 * x1 * x1 * x1) + (1 * x0 * x0 * x0 * x0) + (-1 * x0 * x1 * x1 * x1) + (-2 * x1 * x1 * x1) + (-1 * x1 * x1) + (14 * 1) == 1955730) {
		printf("I am here at depth 1");

	} else {
		printf("I am at the else of depth 1");
	}
}
