#include <crest.h>
#include <stdio.h>

int main()
{
	int x0;
	CREST_int(x0);
	int x1;
	CREST_int(x1);

	if ( 9 * x1 * x1 + 6 * x0 * x1 == 405 ) //x0 = 6, x1= 5
	{
		printf("Solved the if at depth 1.\n");
	}
}