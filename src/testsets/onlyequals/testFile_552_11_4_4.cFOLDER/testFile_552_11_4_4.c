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
	if ((-2 * x1 * x1 * x2 * x3) + (-3 * x2 * x3 * x3 * x3) == -21096) {
		printf("I am here at depth 11");
		if ((1 * x0 * x0 * x0 * x3) + (2 * x0 * x2 * x2 * x3) + (-5 * x2 * x2) == -6101) {
			printf("I am here at depth 10");
			if ((-1 * x0 * x1 * x2 * x2) + (-1 * x1 * x3 * x3 * x3) + (1 * x0 * x0 * x1) + (1 * x1 * x1 * x3) + (-13 * x2 * x3) == -58) {
				printf("I am here at depth 9");
				if ((-2 * x0 * x3) == -56) {
					printf("I am here at depth 8");
					if ((1 * x1 * x2 * x2 * x2) + (-4 * x0 * x1 * x1 * x3) == -11752) {
						printf("I am here at depth 7");
						if ((-6 * x0 * x0 * x2 * x2) == 0) {
							printf("I am here at depth 6");
							if ((-1 * x0 * x1 * x1 * x1) + (-1 * x0 * x0 * x2 * x3) + (-1 * x1 * x2 * x2 * x3) + (1 * x1 * x3 * x3 * x3) == -798) {
								printf("I am here at depth 5");
								if ((29 * x0 * x0 * x3 * x3) + (1 * x0 * x0 * x1) + (5 * x0 * x1 * x2) + (-1 * x2 * x2 * x3) + (1 * x1) == 50712) {
									printf("I am here at depth 4");
									if ((-1 * x0 * x0) + (1 * x0) == -72) {
										printf("I am here at depth 3");
										if ((1 * x0 * x0 * x1 * x2) + (1 * x1 * x1 * x1 * x2) + (1 * x0 * x0 * x1 * x3) + (-2 * x2 * x2 * x2 * x3) + (-51 * x0 * x3 * x3 * x3) + (6 * x0 * x0 * x1) + (1 * x1 * x1 * x2) + (2 * x0 * x2 * x3) + (-4 * x0 * x0) == 46234) {
											printf("I am here at depth 2");
											if ((1 * x2 * x2 * x2 * x3) == 5120) {
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
				} else {
					printf("I am at the else of depth 8");
				}
			} else {
				printf("I am at the else of depth 9");
			}
		} else {
			printf("I am at the else of depth 10");
		}
	} else {
		printf("I am at the else of depth 11");
	}
}
