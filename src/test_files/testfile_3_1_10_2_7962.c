#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);

	if ( 1 * x0 * x0 == 1 ) //x0 = 1
	{
		printf("Solved the if at depth 1.\n");
		if ( 6 * x0 * x0 == 6 ) //x0 = 1
		{
			printf("Solved the if at depth 2.\n");
			if ( 10 * x0 * x0 == 10 ) //x0 = 1
			{
				printf("Solved the if at depth 3.\n");
			}
		}
	}
}