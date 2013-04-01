#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);

	if ( 6 * x0 * x0 == 6 ) //x0 = 1
	{
		printf("Solved the if at depth 1.\n");
		if ( 7 * x0 * x0 == 7 ) //x0 = 1
		{
			printf("Solved the if at depth 2.\n");
		}
	}
}