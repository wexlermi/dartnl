#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);

	if ( 10 * x0 * x0 == 250 ) //x0 = 5
	{
		printf("Solved the if at depth 1.\n");
		if ( 1 * x0 * x0 == 25 ) //x0 = 5
		{
			printf("Solved the if at depth 2.\n");
			if ( 8 * x0 * x0 == 200 ) //x0 = 5
			{
				printf("Solved the if at depth 3.\n");
				if ( 5 * x0 * x0 == 125 ) //x0 = 5
				{
					printf("Solved the if at depth 4.\n");
				}
			}
		}
	}
}