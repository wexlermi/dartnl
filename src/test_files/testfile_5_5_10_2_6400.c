#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);
	int x1;
	CREST_int(x1);
	int x2;
	CREST_int(x2);
	int x3;
	CREST_int(x3);
	int x4;
	CREST_int(x4);

	if ( 9 * x2 * x4 + 9 * x0 * x4 + 4 * x3 * x3 + 10 * x2 * x2 + 8 * x2 * x3 == 1518 ) //x0 = 2, x1= 3, x2= 7, x3= 8, x4= 4
	{
		printf("Solved the if at depth 1.\n");
		if ( 10 * x1 * x1 + 2 * x1 * x1 + 1 * x0 * x2 + 5 * x0 * x4 + 7 * x0 * x3 == 274 ) //x0 = 2, x1= 3, x2= 7, x3= 8, x4= 4
		{
			printf("Solved the if at depth 2.\n");
			if ( 8 * x0 * x0 + 3 * x0 * x2 + 5 * x3 * x3 + 5 * x1 * x2 + 4 * x2 * x4 == 611 ) //x0 = 2, x1= 3, x2= 7, x3= 8, x4= 4
			{
				printf("Solved the if at depth 3.\n");
				if ( 7 * x4 * x4 + 4 * x4 * x4 + 7 * x2 * x2 + 2 * x2 * x3 + 7 * x4 * x4 == 743 ) //x0 = 2, x1= 3, x2= 7, x3= 8, x4= 4
				{
					printf("Solved the if at depth 4.\n");
					if ( 7 * x2 * x3 + 1 * x2 * x2 + 9 * x2 * x2 + 1 * x0 * x4 + 9 * x0 * x3 == 1034 ) //x0 = 2, x1= 3, x2= 7, x3= 8, x4= 4
					{
						printf("Solved the if at depth 5.\n");
					}
				}
			}
		}
	}
}