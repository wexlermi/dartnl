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
  int x6;
//Possible solution to enter:
// x0 = 8
// x1 = -8
// x2 = -9
// x3 = -8
// x4 = 1
// x5 = 7
// x6 = 4
  if ((-3 * x1 * x1 * x1 * x2 * x4) + (-6 * x1 * x1 * x2 * x3 * x5) +
      (1 * x2 * x3 * x4 * x4 * x5) + (1 * x0 * x0 * x0 * x0 * x6) +
      (1 * x0 * x0 * x2 * x2) + (-15 * x0 * x1 * x4 * x6) == -181448)
    {
      printf ("I am here at depth 2");
      if ((1 * x0 * x0 * x0 * x0 * x4) + (-5 * x0 * x1 * x1 * x2 * x4) +
	  (1 * x1 * x1 * x2 * x4 * x4) + (8 * x0 * x0 * x1 * x3 * x5) +
	  (1 * x0 * x0 * x1 * x4 * x6) + (-1 * x0 * x0 * x4 * x4 * x6) +
	  (2 * x1 * x2 * x3 * x5 * x6) + (-2 * x2 * x2 * x6 * x6 * x6) +
	  (-1 * x0 * x4 * x4 * x5) + (-1 * x0 * x1 * x3 * x6) +
	  (-18 * x1 * x3 * x4) + (-1 * x3 * x3 * x6) + (3 * x0 * x3) +
	  (3 * 1) == 207307)
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
