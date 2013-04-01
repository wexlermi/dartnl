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

	if ( 5 * x2 * x2 + 1 * x1 * x1 + 1 * x3 * x3 + 8 * x1 * x1 == 126 ) //x0 = 2, x1= 3, x2= 2, x3= 5
	{
		printf("Solved the if at depth 1.\n");
		if ( 5 * x2 * x2 + 2 * x3 * x3 + 1 * x0 * x0 + 6 * x2 * x2 == 98 ) //x0 = 2, x1= 3, x2= 2, x3= 5
		{
			printf("Solved the if at depth 2.\n");
		}
	}
}