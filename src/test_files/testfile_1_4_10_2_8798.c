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

	if ( 2 * x1 * x1 + 6 * x0 * x3 + 10 * x2 * x2 + 6 * x1 * x2 == 520 ) //x0 = 7, x1= 9, x2= 2, x3= 5
	{
		printf("Solved the if at depth 1.\n");
	}
}