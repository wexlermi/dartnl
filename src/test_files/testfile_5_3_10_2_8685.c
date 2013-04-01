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

	if ( 10 * x1 * x1 + 6 * x2 * x2 + 8 * x0 * x0 == 1226 ) //x0 = 2, x1= 9, x2= 8
	{
		printf("Solved the if at depth 1.\n");
		if ( 1 * x0 * x1 + 5 * x2 * x2 + 2 * x1 * x1 == 500 ) //x0 = 2, x1= 9, x2= 8
		{
			printf("Solved the if at depth 2.\n");
			if ( 9 * x0 * x2 + 5 * x2 * x2 + 10 * x1 * x1 == 1274 ) //x0 = 2, x1= 9, x2= 8
			{
				printf("Solved the if at depth 3.\n");
				if ( 1 * x1 * x1 + 3 * x1 * x2 + 4 * x1 * x2 == 585 ) //x0 = 2, x1= 9, x2= 8
				{
					printf("Solved the if at depth 4.\n");
					if ( 1 * x1 * x1 + 5 * x0 * x1 + 2 * x1 * x1 == 333 ) //x0 = 2, x1= 9, x2= 8
					{
						printf("Solved the if at depth 5.\n");
					}
				}
			}
		}
	}
}