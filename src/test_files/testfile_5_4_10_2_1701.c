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

	if ( 3 * x2 * x3 + 1 * x1 * x1 + 7 * x2 * x2 + 8 * x1 * x1 == 882 ) //x0 = 3, x1= 8, x2= 6, x3= 3
	{
		printf("Solved the if at depth 1.\n");
		if ( 1 * x0 * x1 + 6 * x0 * x3 + 4 * x2 * x3 + 8 * x1 * x2 == 534 ) //x0 = 3, x1= 8, x2= 6, x3= 3
		{
			printf("Solved the if at depth 2.\n");
			if ( 8 * x0 * x2 + 5 * x2 * x2 + 10 * x0 * x0 + 3 * x1 * x2 == 558 ) //x0 = 3, x1= 8, x2= 6, x3= 3
			{
				printf("Solved the if at depth 3.\n");
				if ( 10 * x2 * x2 + 1 * x2 * x3 + 2 * x2 * x2 + 10 * x0 * x0 == 540 ) //x0 = 3, x1= 8, x2= 6, x3= 3
				{
					printf("Solved the if at depth 4.\n");
					if ( 10 * x2 * x2 + 2 * x0 * x1 + 3 * x0 * x2 + 9 * x3 * x3 == 543 ) //x0 = 3, x1= 8, x2= 6, x3= 3
					{
						printf("Solved the if at depth 5.\n");
					}
				}
			}
		}
	}
}