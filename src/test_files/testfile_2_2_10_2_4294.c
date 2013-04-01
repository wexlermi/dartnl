#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);
	int x1;
	CREST_int(x1);

	if ( 10 * x1 * x1 + 4 * x0 * x0 == 746 ) //x0 = 8, x1= 7
	{
		printf("Solved the if at depth 1.\n");
		if ( 8 * x1 * x1 + 4 * x0 * x1 == 616 ) //x0 = 8, x1= 7
		{
			printf("Solved the if at depth 2.\n");
		}
	}
}