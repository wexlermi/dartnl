#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);

	if ( 7 * x0 * x0 == 343 ) //x0 = 7
	{
		printf("Solved the if at depth 1.\n");
		if ( 8 * x0 * x0 == 392 ) //x0 = 7
		{
			printf("Solved the if at depth 2.\n");
		}
	}
}