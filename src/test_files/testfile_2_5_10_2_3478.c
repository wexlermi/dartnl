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

	if ( 7 * x1 * x1 + 7 * x3 * x3 + 2 * x2 * x3 + 9 * x4 * x4 + 1 * x3 * x4 == 949 ) //x0 = 10, x1= 6, x2= 9, x3= 8, x4= 3
	{
		printf("Solved the if at depth 1.\n");
		if ( 3 * x2 * x2 + 5 * x3 * x3 + 10 * x2 * x2 + 5 * x1 * x1 + 6 * x2 * x2 == 2039 ) //x0 = 10, x1= 6, x2= 9, x3= 8, x4= 3
		{
			printf("Solved the if at depth 2.\n");
		}
	}
}