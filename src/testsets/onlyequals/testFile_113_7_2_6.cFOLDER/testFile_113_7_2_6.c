#include <crest.h>
#include <stdio.h>

int 
main(int argc, char **argv)
{
	int             x0;
	CREST_int(x0);
	int             x1;
	CREST_int(x1);
	if ((-1 * x0 * x1 * x1) == -4) {
		printf("I am here at depth 7");
		if ((-1 * x0 * x0 * x0 * x0 * x0 * x0) + (1 * x0 * x0 * x0 * x1 * x1 * x1) + (-1 * x0 * x1 * x1 * x1 * x1 * x1) + (10 * x0 * x0 * x0 * x1 * x1) + (1 * x0 * x1 * x1 * x1 * x1) + (2 * x0 * x0 * x0) + (52 * x0 * x0 * x1) + (1 * x0 * x1 * x1) + (-1 * x0 * x0) + (-1 * x1 * x1) == 275783) {
			printf("I am here at depth 6");
			if ((-2 * x0 * x0 * x0 * x0 * x0 * x1) + (-1 * x0 * x0 * x0 * x0 * x1 * x1) + (9 * x0 * x0 * x1 * x1 * x1 * x1) + (1 * x0 * x0 * x0 * x0) + (-1 * x0 * x0 * x1 * x1) + (-1 * x0 * x0 * x1) + (3 * x0 * x1) + (6 * x1) + (-4 * 1) == 1367660) {
				printf("I am here at depth 5");
				if ((-1 * x1 * x1 * x1 * x1 * x1 * x1) + (-1 * x0 * x0 * x1 * x1 * x1) + (15 * x0 * x0 * x0 * x1) + (-2 * x1 * x1 * x1 * x1) + (-1 * x1 * x1 * x1) + (-2 * x0 * x1) + (1 * x1 * x1) + (-1 * x1) + (1 * 1) == -123045) {
					printf("I am here at depth 4");
					if ((-2 * x0 * x0 * x0 * x0 * x0 * x0) + (-1 * x0 * x0 * x0 * x0 * x0 * x1) + (-1 * x0 * x0 * x0 * x0 * x1 * x1) + (-35 * x1 * x1 * x1 * x1 * x1 * x1) + (1 * x0 * x0 * x0 * x0 * x0) + (-2 * x0 * x0 * x0 * x1 * x1) + (4 * x0 * x0 * x1 * x1 * x1) + (3 * x0 * x0 * x0 * x0) + (-2 * x0 * x1 * x1 * x1) + (1 * x0 * x0 * x0) + (-4 * x0 * x1 * x1) + (-2 * x0 * x1) + (-11 * x1) == -4255923) {
						printf("I am here at depth 3");
						if ((1 * x0 * x0 * x0 * x0 * x0) + (1 * x0 * x0 * x0 * x1 * x1) + (1 * x1 * x1 * x1 * x1) + (-2 * x0 * x1) + (2 * x1) == -10920) {
							printf("I am here at depth 2");
							if ((-1 * x0 * x0 * x0 * x0 * x1 * x1) + (-5 * x0 * x0 * x0 * x1 * x1 * x1) + (-1 * x0 * x0 * x1 * x1 * x1 * x1) + (1 * x0 * x1 * x1 * x1 * x1 * x1) + (1 * x1 * x1 * x1 * x1 * x1 * x1) + (-3 * x0 * x0 * x0 * x0 * x0) + (49 * x0 * x0 * x0 * x0 * x1) + (1 * x0 * x1 * x1 * x1 * x1) + (-1 * x0 * x0 * x0 * x0) + (1 * x0 * x0 * x0 * x1) + (1 * x0 * x0 * x0) + (1 * x0 * x0) + (1 * 1) == -304638) {
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
		} else {
			printf("I am at the else of depth 6");
		}
	} else {
		printf("I am at the else of depth 7");
	}
}
