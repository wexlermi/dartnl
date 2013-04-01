#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);

	if ( 6 * x0 * x0 == 216 ) //x0 = 6
	{
		printf("Solved the if at depth 1.\n");
		if ( 7 * x0 * x0 == 252 ) //x0 = 6
		{
			printf("Solved the if at depth 2.\n");
			if ( 8 * x0 * x0 == 288 ) //x0 = 6
			{
				printf("Solved the if at depth 3.\n");
				if ( 1 * x0 * x0 == 36 ) //x0 = 6
				{
					printf("Solved the if at depth 4.\n");
					if ( 7 * x0 * x0 == 252 ) //x0 = 6
					{
						printf("Solved the if at depth 5.\n");
					}
				}
			}
		}
	}
}