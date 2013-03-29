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
// x0 = 10
// x1 = -5
// x2 = -2
// x3 = -8
// x4 = 1
// x5 = 4
// x6 = -7
// x7 = 3
// x8 = -1
// x9 = -2
// x10 = -2
// x11 = -7
  if ((1 * x0 * x3 * x6 * x7 * x9) + (-3 * x1 * x5 * x7 * x9) +
      (2 * x1 * x1 * x9 * x9) > -3559)
    {
      printf ("I am here at depth 2");
      if ((-2 * x4 * x4 * x5 * x5 * x5) + (1 * x4 * x5 * x5 * x7 * x8) +
	  (3 * x0 * x6 * x6 * x7 * x8) + (-1 * x3 * x6 * x6 * x8 * x9) +
	  (5 * x1 * x3 * x3 * x6 * x10) + (-1 * x0 * x1 * x4 * x8 * x11) +
	  (1 * x4 * x8 * x8 * x8 * x11) + (-2 * x1 * x7 * x9 * x10 * x11) +
	  (-8 * x1 * x3 * x9 * x10) + (-1 * x0 * x1 * x3 * x11) +
	  (-1 * x5 * x8 * x9 * x11) < -25023)
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
