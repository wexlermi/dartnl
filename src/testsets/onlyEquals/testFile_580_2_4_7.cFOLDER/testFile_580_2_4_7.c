#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = 6
// x1 = 1
// x2 = -2
// x3 = 6
  if ((1 * x0 * x1 * x1 * x1 * x2 * x2 * x3) +
      (5 * x0 * x0 * x0 * x2 * x2 * x2 * x3) +
      (-1 * x0 * x0 * x0 * x0 * x2 * x3 * x3) +
      (1 * x1 * x1 * x1 * x2 * x2 * x3 * x3) +
      (2 * x0 * x0 * x0 * x0 * x0 * x0) + (-2 * x0 * x1 * x1 * x1 * x1 * x1) +
      (-3 * x0 * x1 * x1 * x1 * x2 * x2) + (4 * x0 * x1 * x1 * x1 * x3 * x3) +
      (2 * x0 * x0 * x0 * x3 * x3 * x3) + (1 * x0 * x1 * x2 * x3 * x3 * x3) +
      (3 * x0 * x2 * x2 * x2 * x2) + (5 * x1 * x2 * x2 * x2 * x2) +
      (-1 * x0 * x1 * x1 * x1 * x3) + (1 * x0 * x0 * x1 * x2) +
      (6 * x0 * x1 * x1 * x3) == 227048)
    {
      printf ("I am here at depth 2");
      if ((-3 * x1 * x2 * x2 * x2 * x2 * x2 * x3) +
	  (-1 * x0 * x0 * x2 * x2 * x2 * x3 * x3) +
	  (-5 * x0 * x0 * x1 * x2 * x3 * x3 * x3) +
	  (1 * x0 * x3 * x3 * x3 * x3 * x3) + (1 * x0 * x1 * x1 * x2) ==
	  135348)
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
