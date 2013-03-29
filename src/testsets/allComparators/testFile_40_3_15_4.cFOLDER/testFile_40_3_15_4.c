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
  int x12;
  int x13;
  int x14;
//Possible solution to enter:
// x0 = 9
// x1 = -10
// x2 = -9
// x3 = -5
// x4 = -1
// x5 = -4
// x6 = 4
// x7 = 9
// x8 = -2
// x9 = 6
// x10 = 4
// x11 = -5
// x12 = 7
// x13 = -9
// x14 = -2
  if ((1 * x0 * x4 * x6 * x7) + (-1 * x1 * x3 * x5 * x11) +
      (2 * x1 * x2 * x6 * x11) + (5 * x0 * x0 * x0 * x12) +
      (1 * x9 * x11 * x11 * x13) + (1 * x3 * x3 * x5 * x14) +
      (-1 * x3 * x5 * x14 * x14) + (-1 * x9 * x10) > 19272)
    {
      printf ("I am here at depth 3");
      if ((-2 * x1 * x10 * x12 * x13) + (1 * x3 * x7 * x13 * x13) +
	  (-2 * x2 * x5 * x6 * x14) == -8109)
	{
	  printf ("I am here at depth 2");
	  if ((-2 * x0 * x6 * x7 * x8) + (3 * x6 * x11 * x14 * x14) +
	      (-6 * x6 * x6 * x12) == 384)
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
