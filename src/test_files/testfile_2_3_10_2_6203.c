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

	if ( 9 * x0 * x0 + 4 * x2 * x2 + 8 * x0 * x1 == 500 ) //x0 = 4, x1= 8, x2= 5
	{
		printf("Solved the if at depth 1.\n");
		if ( 9 * x0 * x1 + 8 * x2 * x2 + 6 * x1 * x2 == 728 ) //x0 = 4, x1= 8, x2= 5
		{
			printf("Solved the if at depth 2.\n");
		}
	}
}