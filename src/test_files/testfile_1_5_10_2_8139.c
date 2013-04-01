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

	if ( 1 * x2 * x2 + 3 * x1 * x1 + 4 * x4 * x4 + 1 * x1 * x1 + 4 * x4 * x4 == 409 ) //x0 = 10, x1= 8, x2= 5, x3= 10, x4= 4
	{
		printf("Solved the if at depth 1.\n");
	}
}