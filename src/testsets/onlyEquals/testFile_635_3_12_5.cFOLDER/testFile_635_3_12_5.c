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
// x1 = 0
// x2 = 7
// x3 = 5
// x4 = 7
// x5 = 4
// x6 = 10
// x7 = -7
// x8 = -9
// x9 = 3
// x10 = 3
// x11 = 6
  if ((-4 * x0 * x2 * x3 * x5 * x6) + (-1 * x0 * x0 * x5 * x8 * x9) +
      (-8 * x0 * x5 * x9 * x10 * x10) + (1 * x0 * x1 * x8 * x9 * x11) +
      (4 * x3 * x5 * x9 * x9 * x11) + (2 * x0 * x5 * x5 * x5) +
      (-5 * x1 * x2 * x5 * x8) + (-1 * x3 * x6 * x7 * x8) +
      (5 * x0 * x7 * x8 * x8) + (-1 * x0 * x4 * x5 * x10) == -7977)
    {
      printf ("I am here at depth 3");
      if ((-2 * x1 * x5 * x5 * x5 * x7) + (1 * x1 * x7 * x7 * x7 * x8) +
	  (1 * x1 * x3 * x7 * x9 * x11) + (1 * x9 * x9 * x11) == 54)
	{
	  printf ("I am here at depth 2");
	  if ((-1 * x1 * x1 * x1 * x1 * x4) + (1 * x3 * x4 * x7 * x8 * x9) +
	      (-11 * x5 * x6 * x7 * x9 * x10) +
	      (-1 * x2 * x4 * x8 * x8 * x11) +
	      (1 * x3 * x6 * x11 * x11 * x11) +
	      (2 * x4 * x11 * x11 * x11 * x11) == 39465)
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
  else
    {
      printf ("I am at the else of depth 3");
    }
}