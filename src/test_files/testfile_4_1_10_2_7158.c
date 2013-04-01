#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);

	if ( 5 * x0 * x0 == 5 ) //x0 = 1
	{
		printf("Solved the if at depth 1.\n");
		if ( 6 * x0 * x0 == 6 ) //x0 = 1
		{
			printf("Solved the if at depth 2.\n");
			if ( 9 * x0 * x0 == 9 ) //x0 = 1
			{
				printf("Solved the if at depth 3.\n");
				if ( 8 * x0 * x0 == 8 ) //x0 = 1
				{
					printf("Solved the if at depth 4.\n");
				}
			}
		}
	}
}