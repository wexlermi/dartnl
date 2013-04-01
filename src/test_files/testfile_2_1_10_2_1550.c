#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);

	if ( 9 * x0 * x0 == 144 ) //x0 = 4
	{
		printf("Solved the if at depth 1.\n");
		if ( 7 * x0 * x0 == 112 ) //x0 = 4
		{
			printf("Solved the if at depth 2.\n");
		}
	}
}