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

	if ( 5 * x0 * x0 + 4 * x0 * x2 + 4 * x1 * x1 + 10 * x1 * x1 + 6 * x3 * x4 == 1202 ) //x0 = 8, x1= 7, x2= 5, x3= 2, x4= 3
	{
		printf("Solved the if at depth 1.\n");
	}
}