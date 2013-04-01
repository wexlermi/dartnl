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

	if ( 6 * x1 * x2 + 4 * x1 * x1 + 4 * x0 * x0 == 500 ) //x0 = 7, x1= 8, x2= 1
	{
		printf("Solved the if at depth 1.\n");
		if ( 4 * x1 * x1 + 3 * x0 * x0 + 3 * x0 * x0 == 550 ) //x0 = 7, x1= 8, x2= 1
		{
			printf("Solved the if at depth 2.\n");
			if ( 9 * x0 * x0 + 1 * x2 * x2 + 5 * x2 * x2 == 447 ) //x0 = 7, x1= 8, x2= 1
			{
				printf("Solved the if at depth 3.\n");
				if ( 4 * x0 * x0 + 5 * x2 * x2 + 9 * x2 * x2 == 210 ) //x0 = 7, x1= 8, x2= 1
				{
					printf("Solved the if at depth 4.\n");
					if ( 9 * x0 * x2 + 3 * x0 * x2 + 6 * x0 * x0 == 378 ) //x0 = 7, x1= 8, x2= 1
					{
						printf("Solved the if at depth 5.\n");
					}
				}
			}
		}
	}
}