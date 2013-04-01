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

	if ( 9 * x2 * x2 + 8 * x2 * x2 + 3 * x1 * x1 + 7 * x4 * x4 + 7 * x0 * x0 == 466 ) //x0 = 5, x1= 2, x2= 4, x3= 7, x4= 1
	{
		printf("Solved the if at depth 1.\n");
		if ( 9 * x1 * x1 + 7 * x2 * x2 + 5 * x3 * x4 + 1 * x3 * x4 + 10 * x3 * x3 == 680 ) //x0 = 5, x1= 2, x2= 4, x3= 7, x4= 1
		{
			printf("Solved the if at depth 2.\n");
		}
	}
}