#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);
	int x1;
	CREST_int(x1);

	if ( 2 * x0 * x0 + 5 * x1 * x1 == 47 ) //x0 = 1, x1= 3
	{
		printf("Solved the if at depth 1.\n");
		if ( 2 * x0 * x0 + 4 * x1 * x1 == 38 ) //x0 = 1, x1= 3
		{
			printf("Solved the if at depth 2.\n");
		}
	}
}