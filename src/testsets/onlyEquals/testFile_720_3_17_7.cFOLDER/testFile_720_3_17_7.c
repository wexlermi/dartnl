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
// x0 = -8
// x1 = 1
// x2 = 6
// x3 = 0
// x4 = 8
// x5 = -8
// x6 = -3
// x7 = 3
// x8 = -2
// x9 = 2
// x10 = -8
// x11 = -3
// x12 = -7
// x13 = -3
// x14 = -6
// x15 = 6
// x16 = -5
  if ((3 * x3 * x5 * x8 * x9 * x9 * x9 * x9) +
      (1 * x2 * x3 * x6 * x6 * x6 * x9 * x10) +
      (-1 * x6 * x6 * x9 * x9 * x12 * x14 * x14) +
      (-2 * x3 * x5 * x6 * x8 * x8 * x8 * x16) +
      (1 * x0 * x3 * x3 * x5 * x9 * x10 * x16) +
      (-3 * x1 * x3 * x5 * x8 * x10 * x10 * x16) +
      (-1 * x6 * x6 * x8 * x8 * x9) == 9000)
    {
      printf ("I am here at depth 3");
      if ((1 * x3 * x3 * x3 * x3 * x4 * x5 * x9) +
	  (1 * x3 * x9 * x9 * x9 * x9 * x9 * x9) +
	  (-1 * x2 * x5 * x5 * x5 * x7 * x10 * x11) +
	  (23 * x4 * x4 * x7 * x8 * x8 * x11 * x15) +
	  (3 * x2 * x2 * x9 * x9 * x13 * x14 * x15) +
	  (2 * x3 * x5 * x7 * x11 * x13 * x14 * x15) +
	  (1 * x4 * x4 * x8 * x13 * x13 * x14 * x15) +
	  (-1 * x1 * x4 * x4 * x8 * x8 * x15 * x15) +
	  (-1 * x2 * x2 * x3 * x4 * x5 * x12 * x16) +
	  (2 * x4 * x5 * x5 * x6 * x9 * x12 * x16) +
	  (4 * x0 * x8 * x9 * x15 * x15 * x16 * x16) +
	  (-1 * x3 * x8 * x12 * x14 * x14 * x16) +
	  (-1 * x7 * x10 * x10 * x11 * x11) + (1 * x1 * x4 * x10 * x10) ==
	  -118912)
	{
	  printf ("I am here at depth 2");
	  if ((1 * x6 * x11 * x11 * x11 * x11 * x11 * x11) +
	      (-1 * x2 * x2 * x3 * x4 * x4 * x4 * x15) +
	      (1 * x1 * x2 * x7 * x11 * x13 * x15 * x15) +
	      (2 * x4 * x4 * x11 * x12 * x14) == -12483)
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