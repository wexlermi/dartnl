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
//Possible solution to enter:
// x0 = -9
// x1 = -9
// x2 = 2
// x3 = 9
// x4 = -10
// x5 = -10
// x6 = -9
// x7 = 3
// x8 = 8
// x9 = -4
// x10 = -10
// x11 = -8
// x12 = -7
// x13 = -1
  if ((1 * x5 * x5 * x7 * x9) + (1 * x5 * x7 * x7 * x9) +
      (-3 * x3 * x4 * x4 * x11) + (1 * x3 * x7 * x11 * x12) +
      (14 * x0 * x3 * x4 * x13) + (-1 * x0 * x1 * x11 * x13) == 10284)
    {
      printf ("I am here at depth 4");
      if ((1 * x0 * x4 * x5 * x7) + (1 * x0 * x5 * x7 * x11) +
	  (-1 * x1 * x1 * x2 * x12) + (-1 * x1 * x10 * x12 * x12) +
	  (-4 * x9 * x9 * x13 * x13) + (2 * x6 * x11 * x13 * x13) +
	  (2 * x8 * x10 * x12) == -6936)
	{
	  printf ("I am here at depth 3");
	  if ((1 * x1 * x3 * x3 * x7) + (-1 * x2 * x6 * x9 * x12) +
	      (-1 * x3 * x5 * x7 * x13) + (1 * x1 * x4 * x10 * x13) +
	      (-5 * x3 * x3 * x11 * x13) + (2 * x0 * x5 * x11 * x13) == -2853)
	    {
	      printf ("I am here at depth 2");
	      if ((-1 * x2 * x5 * x7 * x10) + (5 * x0 * x4 * x9 * x10) +
		  (-3 * x1 * x13 * x13) + (3 * x10 * x10) == 17727)
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
