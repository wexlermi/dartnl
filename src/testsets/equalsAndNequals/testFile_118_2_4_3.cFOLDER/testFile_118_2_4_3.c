#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = -6
// x1 = 0
// x2 = 7
// x3 = -6
  if ((15 * x0 * x1) + (1 * x0) == -6)
    {
      printf ("I am here at depth 2");
      if ((7 * x1 * x2 * x2) + (1 * x0 * x0 * x3) + (1 * x3 * x3 * x3) +
	  (-24 * x1 * x1) + (4 * x3 * x3) == -288)
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
