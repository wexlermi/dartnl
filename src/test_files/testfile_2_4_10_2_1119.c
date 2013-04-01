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
	int x3;
	CREST_int(x3);

	if ( 9 * x2 * x2 + 4 * x1 * x1 + 4 * x0 * x1 + 4 * x2 * x3 == 1100 ) //x0 = 6, x1= 4, x2= 10, x3= 1
	{
		printf("Solved the if at depth 1.\n");
		if ( 1 * x3 * x3 + 10 * x0 * x2 + 10 * x1 * x1 + 10 * x0 * x0 == 1121 ) //x0 = 6, x1= 4, x2= 10, x3= 1
		{
			printf("Solved the if at depth 2.\n");
		}
	}
}