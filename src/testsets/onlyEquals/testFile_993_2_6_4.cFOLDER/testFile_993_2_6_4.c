#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
  int x4;
  int x5;
//Possible solution to enter:
// x0 = -5
// x1 = 0
// x2 = 0
// x3 = -6
// x4 = 3
// x5 = 9
  if ((3 * x1 * x1 * x5) == 0)
    {
      printf ("I am here at depth 2");
      if ((1 * x0 * x1 * x2 * x3) + (-2 * x1 * x2 * x3 * x3) +
	  (-1 * x3 * x3 * x3 * x3) + (3 * x1 * x1 * x2 * x4) +
	  (1 * x1 * x1 * x4 * x4) + (1 * x0 * x2 * x3 * x5) +
	  (2 * x1 * x1 * x3) + (1 * x3) == -1302)
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
