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
//Possible solution to enter:
// x0 = 10
// x1 = -9
// x2 = -9
// x3 = 3
// x4 = -8
// x5 = -4
// x6 = -8
// x7 = -10
// x8 = -9
// x9 = -10
// x10 = -2
// x11 = -1
// x12 = 6
  if ((-2 * x0 * x0 * x1 * x1 * x3 * x6 * x6 * x11) +
      (2 * x1 * x3 * x3 * x6 * x6 * x6 * x6 * x11) +
      (-1 * x3 * x3 * x5 * x6 * x6 * x7 * x8 * x11) +
      (6 * x1 * x4 * x5 * x8 * x8 * x9 * x11 * x11) +
      (2 * x2 * x4 * x5 * x7 * x7 * x8 * x11 * x12) +
      (1 * x0 * x1 * x4 * x8 * x10 * x10 * x12 * x12) +
      (3 * x1 * x3 * x4 * x6 * x11 * x12 * x12 * x12) +
      (7 * x0 * x2 * x3 * x3 * x3 * x8 * x8) +
      (-38 * x3 * x3 * x4 * x5 * x9 * x10 * x10) +
      (3 * x1 * x3 * x3 * x7 * x7 * x8 * x11) +
      (1 * x3 * x3 * x4 * x6 * x7 * x7 * x12) +
      (-7 * x0 * x3 * x4 * x7 * x8 * x9) +
      (5 * x3 * x3 * x6 * x9 * x10 * x10) != -268162)
    {
      printf ("I am here at depth 3");
      if ((-2 * x1 * x1 * x2 * x2 * x2 * x3 * x7 * x8) +
	  (1 * x1 * x3 * x3 * x4 * x6 * x10 * x12 * x12) +
	  (25 * x2 * x3 * x9 * x10 * x12 * x12 * x12 * x12) +
	  (-6 * x0 * x0 * x0 * x2 * x2 * x2 * x6) != -20228345)
	{
	  printf ("I am here at depth 2");
	  if ((1 * x1 * x2 * x5 * x6 * x6 * x6 * x6 * x7) +
	      (38 * x3 * x3 * x3 * x3 * x6 * x8 * x11) +
	      (1 * x4 * x4 * x6 * x6 * x9 * x9 * x11) +
	      (2 * x2 * x2 * x7 * x9 * x10) != 12607454)
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