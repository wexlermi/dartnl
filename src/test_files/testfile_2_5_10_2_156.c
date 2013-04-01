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
	int x4;
	CREST_int(x4);

	if ( 8 * x2 * x2 + 10 * x3 * x3 + 1 * x1 * x1 + 5 * x2 * x3 + 1 * x2 * x2 == 352 ) //x0 = 7, x1= 4, x2= 2, x3= 5, x4= 7
	{
		printf("Solved the if at depth 1.\n");
		if ( 10 * x4 * x4 + 2 * x0 * x3 + 4 * x1 * x1 + 9 * x0 * x2 + 1 * x0 * x1 == 778 ) //x0 = 7, x1= 4, x2= 2, x3= 5, x4= 7
		{
			printf("Solved the if at depth 2.\n");
		}
	}
}