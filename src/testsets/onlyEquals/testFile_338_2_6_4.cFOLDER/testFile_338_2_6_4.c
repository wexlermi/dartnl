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
// x0 = -8
// x1 = 7
// x2 = 5
// x3 = -8
// x4 = -8
// x5 = -4
  if ((-1 * x0 * x0 * x0 * x3) + (-2 * x0 * x1 * x3 * x5) +
      (5 * x1 * x2 * x3 * x5) + (-3 * x1 * x3 * x3 * x5) +
      (-4 * x2 * x2 * x5 * x5) + (-1 * x2 * x4 * x5 * x5) == 9504)
    {
      printf ("I am here at depth 2");
      if ((-14 * x1 * x1 * x2 * x4) + (-7 * x0 * x1 * x4 * x5) +
	  (1 * x0 * x1 * x5) + (2 * x1 * x2 * x5) + (-5 * x3 * x5) == 39768)
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
