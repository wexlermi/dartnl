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
	if ((9 * x0 * x1 * x1 * x3 * x3) + (-1 * x0 * x1 * x2 * x3 * x3) + (1 * x0 * x0 * x0 * x1) + (-2 * x0 * x2 * x2 * x3) + (1 * x1 * x2 * x2 * x3) + (-1 * x2 * x2 * x2) + (-1 * x0 * x1) == 6755) {
		printf("I am here at depth 3");
		if ((-8 * x0 * x0 * x0 * x0 * x2) + (3 * x0 * x1 * x1 * x1 * x2) + (2 * x0 * x0 * x0 * x3 * x3) + (1 * x1 * x2 * x3 * x3) + (-1 * x0 * x0 * x0) + (-5 * x0 * x1 * x1) == -30321) {
			printf("I am here at depth 2");
			if ((-1 * x0 * x1 * x1 * x1 * x1) + (-1 * x0 * x0 * x1 * x1 * x2) + (1 * x1 * x1 * x2 * x2 * x3) + (1 * x1 * x1 * x3 * x3 * x3) + (1 * x2 * x2 * x3 * x3 * x3) + (1 * x0 * x0 * x0 * x0) + (3 * x1 * x1 * x1 * x1) + (-1 * x0 * x0 * x2 * x2) + (1 * x2 * x2 * x2 * x3) + (-14 * x0 * x1 * x2) + (-3 * x0 * x0 * x3) + (1 * x3 * x3 * x3) == -2528) {
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