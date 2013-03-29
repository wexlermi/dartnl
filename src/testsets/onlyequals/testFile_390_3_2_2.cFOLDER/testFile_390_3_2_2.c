#include <crest.h>
#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	CREST_int(x0);
	int             x1;
	CREST_int(x1);
	if ((4 * x1 * x1) == 100) {
		printf("I am here at depth 3");
		if ((1 * 1) == 1) {
			printf("I am here at depth 2");
			if ((-7 * x1) == 56) {
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
}
