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
  int x16;
  int x17;
//Possible solution to enter:
// x0 = 2
// x1 = 0
// x2 = 8
// x3 = -2
// x4 = -9
// x5 = -8
// x6 = -7
// x7 = 0
// x8 = -9
// x9 = 2
// x10 = -4
// x11 = -8
// x12 = 5
// x13 = 1
// x14 = -2
// x15 = -4
// x16 = -10
// x17 = 6
  if ((6 * x0 * x5 * x6 * x15) + (11 * x7 * x15 * x17 * x17) == -2688)
    {
      printf ("I am here at depth 4");
      if ((1 * x2 * x3 * x4 * x6) + (4 * x1 * x2 * x7 * x10) +
	  (1 * x0 * x0 * x5 * x15) + (1 * x3 * x6 * x9 * x15) +
	  (-1 * x8 * x13 * x13 * x17) + (-1 * x3 * x5 * x14) +
	  (-1 * x12 * x14 * x16) + (1 * x5 * x13) == -1014)
	{
	  printf ("I am here at depth 3");
	  if ((-4 * x1 * x1 * x6 * x7) + (-1 * x1 * x5 * x11 * x13) +
	      (26 * x0 * x13 * x13 * x14) + (2 * x1 * x7 * x8 * x16) +
	      (-4 * x5 * x6 * x10 * x16) + (-15 * x0 * x1 * x13 * x16) +
	      (6 * x1 * x12 * x16 * x16) + (-3 * x11 * x11 * x14 * x17) +
	      (5 * x11 * x11 * x15 * x17) + (2 * x10 * x10) == -14408)
	    {
	      printf ("I am here at depth 2");
	      if ((1 * x2 * x4 * x4 * x4) + (-1 * x4 * x5 * x6 * x7) +
		  (3 * x0 * x0 * x8 * x8) + (5 * x0 * x1 * x1 * x10) +
		  (-3 * x2 * x6 * x6 * x10) + (-1 * x0 * x1 * x3 * x14) +
		  (1 * x12 * x12 * x14 * x15) + (1 * x9 * x10 * x13 * x17) +
		  (-1 * x1 * x2 * x6) == -4)
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
