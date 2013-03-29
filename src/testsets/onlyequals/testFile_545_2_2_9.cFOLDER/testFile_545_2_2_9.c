#include <crest.h>
#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	CREST_int(x0);
	int             x1;
	CREST_int(x1);
	if ((-1 * x1 * x1 * x1 * x1 * x1 * x1) + (1 * x0 * x0 * x0 * x0) + (-358 * x0 * x1) == -23950) {
		printf("I am here at depth 2");
		if ((-3 * x0 * x0 * x0 * x0 * x0 * x0 * x0 * x0 * x1) + (1 * x1 * x1 * x1 * x1 * x1 * x1 * x1 * x1 * x1) + (8 * x1 * x1 * x1 * x1 * x1 * x1 * x1 * x1) + (-180 * x0 * x0 * x1 * x1 * x1 * x1 * x1) + (1 * x0 * x0 * x0 * x0 * x0 * x1) + (1 * x0 * x0 * x0 * x1 * x1 * x1) + (-1 * x0 * x0 * x0) + (-16 * x0 * x0 * x1) + (-1 * x0 * x1 * x1) + (-5 * x1 * x1 * x1) + (-68 * 1) == -368368476) {
			printf("I am here at depth 1");

		} else {
			printf("I am at the else of depth 1");
		}
	} else {
		printf("I am at the else of depth 2");
	}
}
