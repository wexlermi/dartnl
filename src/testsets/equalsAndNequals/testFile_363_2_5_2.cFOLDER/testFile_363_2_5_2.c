#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
  int x4;
//Possible solution to enter:
// x0 = 4
// x1 = -7
// x2 = 4
// x3 = 10
// x4 = -4
  if ((-2 * x1 * x3) == 140)
    {
      printf ("I am here at depth 2");
      if ((1 * x1 * x4) == 28)
	{
	  printf ("I am here at depth 1");

	}
      else
	{
	  printf ("I am at the else of depth 1");
	}
    }
  else
    {
      printf ("I am at the else of depth 2");
    }
}
