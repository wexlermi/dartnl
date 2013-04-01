#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);
	int x1;
	CREST_int(x1);
	int x2;
	CREST_int(x2);

	if ( 7 * x0 * x0 + 1 * x1 * x1 + 1 * x1 * x1 == 39 ) //x0 = 1, x1= 4, x2= 6
	{
		printf("Solved the if at depth 1.\n");
		if ( 10 * x2 * x2 + 7 * x2 * x2 + 1 * x0 * x2 == 618 ) //x0 = 1, x1= 4, x2= 6
		{
			printf("Solved the if at depth 2.\n");
			if ( 3 * x2 * x2 + 4 * x0 * x2 + 1 * x1 * x1 == 148 ) //x0 = 1, x1= 4, x2= 6
			{
				printf("Solved the if at depth 3.\n");
			}
		}
	}
}