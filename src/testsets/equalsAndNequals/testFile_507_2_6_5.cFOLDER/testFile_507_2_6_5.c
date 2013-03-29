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
// x0 = -1
// x1 = -9
// x2 = -6
// x3 = -6
// x4 = 1
// x5 = 10
  if ((1 * x2 * x2 * x2 * x3 * x4) + (111 * x2 * x3 * x4 * x4 * x4) +
      (1 * x1 * x2 * x2 * x3 * x5) + (-1 * x2 * x4 * x4 * x5) +
      (1 * x4 * x4 * x5 * x5) + (1 * x1 * x3) + (53 * x5) == 25476)
    {
      printf ("I am here at depth 2");
      if ((-2 * x0 * x0 * x1 * x4 * x4) + (6 * x2 * x2 * x3 * x4 * x5) +
	  (3 * x0 * x4 * x4 * x4 * x5) + (-3 * x1 * x3 * x4 * x5 * x5) +
	  (-1 * x1 * x1 * x2 * x3) + (-1 * x1 * x1 * x5 * x5) +
	  (-1 * x0 * x1 * x1) + (-3 * x1 * x3) + (-53 * x5 * x5) == -45569)
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
