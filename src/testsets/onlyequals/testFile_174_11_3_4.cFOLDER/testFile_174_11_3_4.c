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
	if ((1 * x1 * x1 * x1 * x2) + (-1 * x0 * x2 * x2 * x2) == 80) {
		printf("I am here at depth 11");
		if ((-2 * x0 * x0 * x1 * x1) + (-4 * x1 * x1 * x1 * x1) + (4 * x0 * x2 * x2 * x2) + (-16 * x2 * x2 * x2 * x2) + (-4 * x0 * x1 * x1) + (1 * x0 * x1 * x2) + (1 * x1 * x1) + (1 * x2) == -29529) {
			printf("I am here at depth 10");
			if ((3 * x0 * x0 * x0 * x2) + (1 * x1 * x2 * x2 * x2) + (1 * x1 * x2 * x2) + (-1 * x1 * x1) + (-11 * x0) + (10 * x2) == -1670) {
				printf("I am here at depth 9");
				if ((-1 * x1 * x1 * x1 * x2) == 16) {
					printf("I am here at depth 8");
					if ((-1 * x0 * x0 * x1 * x1) + (1 * x1 * x1 * x1 * x1) + (1 * x1 * x2 * x2 * x2) + (-1 * x0 * x0 * x1) + (1 * x1 * x1 * x2) + (2 * x1 * x1) == -7533) {
						printf("I am here at depth 7");
						if ((-2 * x1 * x1 * x1 * x2) + (-1 * x0 * x0 * x1) + (-6 * x1 * x1 * x2) == 2527) {
							printf("I am here at depth 6");
							if ((-69 * x0 * x0 * x1 * x1) + (-164 * x1 * x2 * x2) + (-2 * x0 * x2) == -63740) {
								printf("I am here at depth 5");
								if ((3 * x0 * x2 * x2) == 1176) {
									printf("I am here at depth 4");
									if ((-2 * x0 * x1 * x1 * x1) + (2 * x0 * x0 * x2 * x2) + (-2 * x1 * x1 * x2 * x2) + (3 * x2 * x2 * x2 * x2) + (1 * x0 * x0) + (1 * x1 * x1) + (-1 * x1 * x2) + (-4 * x0) == -4549) {
										printf("I am here at depth 3");
										if ((3 * x2 * x2) == 48) {
											printf("I am here at depth 2");
											if ((3 * x0 * x0 * x1 * x2) + (-1 * x1 * x1 * x2 * x2) + (1 * x0 * x0 * x2) == -350) {
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
