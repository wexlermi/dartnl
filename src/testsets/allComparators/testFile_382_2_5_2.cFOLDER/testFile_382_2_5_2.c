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
// x0 = -5
// x1 = -10
// x2 = 3
// x3 = -8
// x4 = -10
  if ((2 * x1 * x1) + (1 * x3 * x4) != 371)
    {
      printf ("I am here at depth 2");
      if ((-1 * x0) == 5)
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