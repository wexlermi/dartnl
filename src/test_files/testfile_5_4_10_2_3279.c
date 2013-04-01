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

	if ( 5 * x1 * x2 + 8 * x0 * x0 + 9 * x0 * x1 + 9 * x3 * x3 == 2145 ) //x0 = 10, x1= 8, x2= 10, x3= 5
	{
		printf("Solved the if at depth 1.\n");
		if ( 8 * x0 * x1 + 5 * x1 * x1 + 6 * x1 * x1 + 3 * x2 * x2 == 1644 ) //x0 = 10, x1= 8, x2= 10, x3= 5
		{
			printf("Solved the if at depth 2.\n");
			if ( 3 * x0 * x0 + 10 * x0 * x1 + 1 * x1 * x1 + 9 * x0 * x0 == 2064 ) //x0 = 10, x1= 8, x2= 10, x3= 5
			{
				printf("Solved the if at depth 3.\n");
				if ( 6 * x3 * x3 + 10 * x3 * x3 + 5 * x0 * x1 + 3 * x0 * x2 == 1100 ) //x0 = 10, x1= 8, x2= 10, x3= 5
				{
					printf("Solved the if at depth 4.\n");
					if ( 4 * x0 * x3 + 5 * x3 * x3 + 9 * x0 * x2 + 10 * x2 * x2 == 2225 ) //x0 = 10, x1= 8, x2= 10, x3= 5
					{
						printf("Solved the if at depth 5.\n");
					}
				}
			}
		}
	}
}