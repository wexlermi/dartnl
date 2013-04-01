#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);
	int x1;
	CREST_int(x1);

	if ( 6 * x1 * x1 + 4 * x0 * x1 == 22 ) //x0 = 4, x1= 1
	{
		printf("Solved the if at depth 1.\n");
		if ( 3 * x1 * x1 + 7 * x0 * x1 == 31 ) //x0 = 4, x1= 1
		{
			printf("Solved the if at depth 2.\n");
			if ( 6 * x1 * x1 + 1 * x0 * x0 == 22 ) //x0 = 4, x1= 1
			{
				printf("Solved the if at depth 3.\n");
			}
		}
	}
}