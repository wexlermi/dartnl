#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);
	int x1;
	CREST_int(x1);

	if ( 4 * x0 * x1 + 7 * x0 * x0 == 980 ) //x0 = 10, x1= 7
	{
		printf("Solved the if at depth 1.\n");
		if ( 7 * x1 * x1 + 9 * x1 * x1 == 784 ) //x0 = 10, x1= 7
		{
			printf("Solved the if at depth 2.\n");
			if ( 1 * x1 * x1 + 3 * x0 * x0 == 349 ) //x0 = 10, x1= 7
			{
				printf("Solved the if at depth 3.\n");
				if ( 3 * x0 * x0 + 3 * x0 * x0 == 600 ) //x0 = 10, x1= 7
				{
					printf("Solved the if at depth 4.\n");
					if ( 2 * x1 * x1 + 10 * x0 * x1 == 798 ) //x0 = 10, x1= 7
					{
						printf("Solved the if at depth 5.\n");
					}
				}
			}
		}
	}
}