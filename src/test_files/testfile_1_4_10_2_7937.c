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

	if ( 8 * x1 * x1 + 10 * x1 * x3 + 7 * x1 * x1 + 4 * x0 * x0 == 151 ) //x0 = 3, x1= 1, x2= 5, x3= 10
	{
		printf("Solved the if at depth 1.\n");
	}
}