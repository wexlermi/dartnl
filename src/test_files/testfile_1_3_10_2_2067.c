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

	if ( 2 * x2 * x2 + 1 * x2 * x2 + 3 * x0 * x0 == 312 ) //x0 = 2, x1= 9, x2= 10
	{
		printf("Solved the if at depth 1.\n");
	}
}