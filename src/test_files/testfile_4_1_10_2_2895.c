#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);

	if ( 4 * x0 * x0 == 64 ) //x0 = 4
	{
		printf("Solved the if at depth 1.\n");
		if ( 1 * x0 * x0 == 16 ) //x0 = 4
		{
			printf("Solved the if at depth 2.\n");
			if ( 3 * x0 * x0 == 48 ) //x0 = 4
			{
				printf("Solved the if at depth 3.\n");
				if ( 4 * x0 * x0 == 64 ) //x0 = 4
				{
					printf("Solved the if at depth 4.\n");
				}
			}
		}
	}
}