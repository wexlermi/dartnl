#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);
	int x1;
	CREST_int(x1);

	if ( 3 * x0 * x0 + 8 * x1 * x1 == 635 ) //x0 = 9, x1= 7
	{
		printf("Solved the if at depth 1.\n");
		if ( 3 * x0 * x1 + 10 * x1 * x1 == 679 ) //x0 = 9, x1= 7
		{
			printf("Solved the if at depth 2.\n");
			if ( 9 * x0 * x0 + 1 * x0 * x1 == 792 ) //x0 = 9, x1= 7
			{
				printf("Solved the if at depth 3.\n");
			}
		}
	}
}