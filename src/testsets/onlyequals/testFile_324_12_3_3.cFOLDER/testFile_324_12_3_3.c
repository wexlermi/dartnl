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
	if ((6 * x0 * x1 * x1) + (7 * x1 * x1 * x2) + (-1 * x1 * x2) + (3 * x2) == 1335) {
		printf("I am here at depth 12");
		if ((1 * x1 * x1 * x1) + (-2 * x0) + (-1 * x2) == 209) {
			printf("I am here at depth 11");
			if ((11 * x0 * x2 * x2) + (4 * x2 * x2 * x2) + (-1 * x1) == 1129) {
				printf("I am here at depth 10");
				if ((-10 * x0 * x1 * x2) == -3780) {
					printf("I am here at depth 9");
					if (== 0) {
						printf("I am here at depth 8");
						if ((-1 * x0 * x0) + (1 * x1 * x1) + (-1 * x0 * x2) + (-1 * x1 * x2) == -84) {
							printf("I am here at depth 7");
							if ((1 * x0 * x0 * x1) + (-1 * x1 * x1 * x2) == -846) {
								printf("I am here at depth 6");
								if ((-4 * x1 * x1) + (-1 * x1) + (-1 * 1) == -249) {
									printf("I am here at depth 5");
									if ((1 * x0 * x2 * x2) + (1 * x1 * x2 * x2) + (3 * x0 * x1) + (1 * 1) == 1126) {
										printf("I am here at depth 4");
										if ((1 * x0 * x2 * x2) + (-11 * x1 * x1) == -766) {
											printf("I am here at depth 3");
											if ((-67 * x2 * x2 * x2) == -4288) {
												printf("I am here at depth 2");
												if ((1 * x0 * x1 * x1) + (-1 * x1 * x1 * x1) + (2 * x1 * x1 * x2) + (-1 * x2 * x2) + (-1 * 1) == 22) {
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
	} else {
		printf("I am at the else of depth 12");
	}
}
