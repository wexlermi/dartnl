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
  int x7;
  int x8;
  int x9;
  int x10;
  int x11;
//Possible solution to enter:
// x0 = 1
// x1 = -9
// x2 = 3
// x3 = 8
// x4 = -4
// x5 = 6
// x6 = -9
// x7 = -7
// x8 = 2
// x9 = 8
// x10 = -5
// x11 = 3
  if ((1 * x2 * x3 * x5 * x7 * x8) + (-2 * x2 * x3 * x7 * x9 * x9) +
      (-8 * x1 * x6 * x9 * x10 * x10) + (-1 * x2 * x2 * x2 * x3 * x11) +
      (-5 * x2 * x11 * x11 * x11 * x11) >= -112022)
    {
      printf ("I am here at depth 2");
      if ((4 * x2 * x4 * x5 * x6 * x8) + (3 * x0 * x3 * x3 * x8 * x8) +
	  (-6 * x0 * x3 * x6 * x6 * x9) + (2 * x2 * x5 * x7 * x7 * x9) +
	  (-2 * x0 * x3 * x9 * x9 * x9) + (1 * x1 * x9 * x9 * x9 * x9) +
	  (-1 * x0 * x5 * x8 * x8 * x10) + (-1 * x3 * x3 * x9 * x9 * x10) +
	  (3 * x5 * x9 * x10 * x10 * x10) + (1 * x2 * x3 * x4 * x7 * x11) +
	  (-5 * x2 * x6 * x7 * x10 * x11) + (-1 * x3 * x7 * x9 * x9) +
	  (1 * x1 * x9 * x10 * x10) < -35435)
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
