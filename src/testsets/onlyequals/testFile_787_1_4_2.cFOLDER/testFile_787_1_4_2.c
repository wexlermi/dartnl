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
	if ((6 * x0) == 0) {
		printf("I am here at depth 1");

	} else {
		printf("I am at the else of depth 1");
	}
}
