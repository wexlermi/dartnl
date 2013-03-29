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
// x0 = 5
// x1 = -1
// x2 = 10
// x3 = 3
// x4 = 3
// x5 = 9
// x6 = -3
// x7 = -10
// x8 = -6
// x9 = -8
// x10 = 3
// x11 = -8
// x12 = 6
// x13 = -9
  if ((1 * x1 * x5 * x11 * x13) == -648)
    {
      printf ("I am here at depth 3");
      if ((1 * x2 * x2 * x2 * x5) + (1 * x5 * x5 * x7 * x12) +
	  (-1 * x3 * x9 * x11 * x12) + (2 * x6 * x10 * x11 * x12) +
	  (10 * x13 * x13 * x13 * x13) == 69462)
	{
	  printf ("I am here at depth 2");
	  if ((-1 * x6 * x7 * x8 * x8) + (1 * x5 * x7 * x9 * x10) +
	      (1 * x7 * x8 * x8 * x13) + (-3 * x0 * x3 * x10) +
	      (3 * x3 * x4) == 4212)
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
