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
  int x15;
//Possible solution to enter:
// x0 = 6
// x1 = 2
// x2 = 1
// x3 = 4
// x4 = -1
// x5 = -1
// x6 = 2
// x7 = -9
// x8 = 9
// x9 = -5
// x10 = -2
// x11 = 0
// x12 = -10
// x13 = -2
// x14 = -7
// x15 = -5
  if ((-1 * x0 * x2 * x6 * x11) + (-1 * x0 * x7 * x9 * x11) +
      (-1 * x0 * x1 * x1 * x15) + (4 * x1 * x8 * x15 * x15) < 2008)
    {
      printf ("I am here at depth 4");
      if ((-1 * x2 * x2 * x4 * x8) + (-1 * x3 * x4 * x6 * x8) +
	  (1 * x1 * x1 * x9 * x11) + (6 * x0 * x2 * x10 * x12) +
	  (4 * x0 * x3 * x4 * x13) + (1 * x1 * x8 * x14 * x14) +
	  (-1 * x3 * x4 * x5 * x15) + (-2 * x1 * x10 * x10) +
	  (1 * x0 * x8 * x11) != 1907)
	{
	  printf ("I am here at depth 3");
	  if ((-6 * x0 * x5 * x6 * x6) + (-1 * x0 * x1 * x7 * x9) +
	      (1 * x3 * x9 * x9 * x9) + (2 * x0 * x3 * x10 * x12) >= -15)
	    {
	      printf ("I am here at depth 2");
	      if ((-1 * x2 * x6 * x6 * x8) + (2 * x0 * x2 * x8 * x11) +
		  (1 * x7 * x7 * x10 * x12) + (-4 * x7 * x12 * x13 * x13) >=
		  73)
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
  else
    {
      printf ("I am at the else of depth 4");
    }
}
