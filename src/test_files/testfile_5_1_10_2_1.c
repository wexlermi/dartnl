#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);

	if ( 8 * x0 * x0 == 200 ) //x0 = 5
	{
		printf("Solved the if at depth 1.\n");
		if ( 10 * x0 * x0 == 250 ) //x0 = 5
		{
			printf("Solved the if at depth 2.\n");
			if ( 5 * x0 * x0 == 125 ) //x0 = 5
			{
				printf("Solved the if at depth 3.\n");
				if ( 4 * x0 * x0 == 100 ) //x0 = 5
				{
					printf("Solved the if at depth 4.\n");
					if ( 9 * x0 * x0 == 225 ) //x0 = 5
					{
						printf("Solved the if at depth 5.\n");
					}
				}
			}
		}
	}
}