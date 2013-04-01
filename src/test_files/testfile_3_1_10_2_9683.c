#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);

	if ( 2 * x0 * x0 == 200 ) //x0 = 10
	{
		printf("Solved the if at depth 1.\n");
		if ( 1 * x0 * x0 == 100 ) //x0 = 10
		{
			printf("Solved the if at depth 2.\n");
			if ( 9 * x0 * x0 == 900 ) //x0 = 10
			{
				printf("Solved the if at depth 3.\n");
			}
		}
	}
}