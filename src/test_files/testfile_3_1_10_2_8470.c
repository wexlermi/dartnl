#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);

	if ( 1 * x0 * x0 == 81 ) //x0 = 9
	{
		printf("Solved the if at depth 1.\n");
		if ( 4 * x0 * x0 == 324 ) //x0 = 9
		{
			printf("Solved the if at depth 2.\n");
			if ( 4 * x0 * x0 == 324 ) //x0 = 9
			{
				printf("Solved the if at depth 3.\n");
			}
		}
	}
}