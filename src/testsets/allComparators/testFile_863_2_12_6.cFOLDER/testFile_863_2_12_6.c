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
// x0 = 3
// x1 = 0
// x2 = 5
// x3 = -2
// x4 = -1
// x5 = 1
// x6 = -5
// x7 = 4
// x8 = -3
// x9 = -3
// x10 = -6
// x11 = -10
  if ((-1 * x3 * x3 * x4 * x6 * x7 * x8) +
      (-31 * x5 * x6 * x8 * x8 * x8 * x8) +
      (-31 * x5 * x5 * x6 * x6 * x9 * x10) +
      (-3 * x0 * x5 * x7 * x7 * x9 * x10) +
      (-7 * x3 * x4 * x5 * x5 * x9 * x11) + (-1 * x0 * x2 * x4 * x5 * x10) +
      (6 * x2 * x2 * x7 * x11 * x11) + (1 * x0 * x2 * x4 * x5) >= 55726)
    {
      printf ("I am here at depth 2");
      if ((3 * x0 * x3 * x4 * x8 * x8 * x8) +
	  (-1 * x1 * x1 * x2 * x3 * x3 * x10) +
	  (10 * x0 * x2 * x6 * x8 * x8 * x10) +
	  (-1 * x4 * x4 * x8 * x8 * x8 * x10) +
	  (-46 * x0 * x4 * x4 * x7 * x9 * x10) + (1 * x0 * x0 * x0 * x0) +
	  (-4 * x0 * x3 * x6 * x10) <= 30769)
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