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

	if ( 10 * x0 * x4 + 8 * x0 * x0 + 10 * x0 * x0 + 10 * x2 * x3 + 10 * x1 * x1 == 1242 ) //x0 = 7, x1= 5, x2= 2, x3= 2, x4= 1
	{
		printf("Solved the if at depth 1.\n");
	}
}