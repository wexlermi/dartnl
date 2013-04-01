#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);
	int x1;
	CREST_int(x1);

	if ( 5 * x1 * x1 + 8 * x0 * x1 == 749 ) //x0 = 9, x1= 7
	{
		printf("Solved the if at depth 1.\n");
		if ( 9 * x0 * x0 + 5 * x1 * x1 == 974 ) //x0 = 9, x1= 7
		{
			printf("Solved the if at depth 2.\n");
		}
	}
}