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
//Possible solution to enter:
// x0 = 4
// x1 = 10
// x2 = 6
// x3 = 10
// x4 = -3
// x5 = 0
// x6 = -5
// x7 = -7
// x8 = -2
// x9 = -8
// x10 = 5
// x11 = -1
// x12 = 3
// x13 = 0
// x14 = 2
// x15 = 4
// x16 = 4
  if ((-2 * x0 * x6 * x8 * x11 * x11) + (-1 * x4 * x5 * x6 * x12 * x14) +
      (6 * x0 * x5 * x9 * x12 * x14) + (-104 * x3 * x6 * x6 * x8 * x15) +
      (-84 * x1 * x10 * x10 * x15 * x16) + (-2 * x3 * x4 * x4 * x10) +
      (-1 * x12 * x14 * x14 * x16) + (4 * x8 * x15 * x15 * x16) == -129540)
    {
      printf ("I am here at depth 3");
      if ((2 * x1 * x3 * x4 * x7 * x7) + (-16 * x6 * x8 * x9 * x13 * x14) +
	  (4 * x5 * x6 * x11 * x14 * x14) +
	  (-1 * x9 * x10 * x11 * x12 * x15) != -29972)
	{
	  printf ("I am here at depth 2");
	  if ((-10 * x3 * x3 * x5 * x9 * x9) +
	      (-1 * x2 * x9 * x13 * x13 * x13) +
	      (1 * x0 * x1 * x4 * x9 * x16) +
	      (-1 * x3 * x7 * x11 * x13 * x16) + (-1 * x0 * x2 * x8 * x10) +
	      (-1 * x6 * x8 * x9 * x10) != 4388)
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
