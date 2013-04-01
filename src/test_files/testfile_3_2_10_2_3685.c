#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);
	int x1;
	CREST_int(x1);

	if ( 6 * x0 * x1 + 4 * x1 * x1 == 72 ) //x0 = 2, x1= 3
	{
		printf("Solved the if at depth 1.\n");
		if ( 1 * x0 * x1 + 5 * x0 * x0 == 26 ) //x0 = 2, x1= 3
		{
			printf("Solved the if at depth 2.\n");
			if ( 1 * x1 * x1 + 8 * x1 * x1 == 81 ) //x0 = 2, x1= 3
			{
				printf("Solved the if at depth 3.\n");
			}
		}
	}
}