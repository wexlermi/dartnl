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
// x0 = -10
// x1 = 6
// x2 = 5
// x3 = -1
// x4 = -6
// x5 = 4
// x6 = 0
// x7 = -5
// x8 = 4
// x9 = 1
// x10 = -6
// x11 = -3
// x12 = -4
// x13 = 9
// x14 = 4
// x15 = -4
// x16 = -7
// x17 = 7
  if ((1 * x2 * x4 * x4 * x7 * x8 * x12) +
      (1 * x0 * x0 * x1 * x6 * x7 * x16) +
      (-1 * x7 * x8 * x10 * x16 * x16 * x16) +
      (-1 * x3 * x3 * x13 * x13 * x17) + (-1 * x2 * x8 * x13 * x17 * x17) +
      (-6 * x9 * x10 * x13) != 46449)
    {
      printf ("I am here at depth 3");
      if ((-14 * x3 * x4 * x4 * x5 * x6 * x12) +
	  (-1 * x4 * x4 * x7 * x8 * x12 * x12) +
	  (-1 * x2 * x3 * x3 * x5 * x14 * x14) +
	  (-3 * x3 * x3 * x7 * x12 * x14 * x14) +
	  (3 * x2 * x7 * x8 * x12 * x13 * x17) +
	  (6 * x3 * x3 * x6 * x9 * x9) == 85840)
	{
	  printf ("I am here at depth 2");
	  if ((1 * x1 * x1 * x6 * x7 * x8 * x10) +
	      (1 * x0 * x2 * x2 * x5 * x7 * x12) +
	      (-1 * x1 * x2 * x9 * x10 * x10 * x15) +
	      (-1 * x0 * x1 * x7 * x11 * x12 * x15) +
	      (-1 * x0 * x0 * x8 * x10 * x14 * x15) +
	      (4 * x0 * x5 * x6 * x8 * x12 * x16) +
	      (9 * x2 * x3 * x5 * x5 * x13 * x16) +
	      (1 * x4 * x6 * x8 * x9 * x15 * x17) +
	      (-1 * x2 * x5 * x9 * x11 * x15 * x17) +
	      (-1 * x13 * x13 * x14 * x14 * x16 * x17) +
	      (-2 * x1 * x7 * x13 * x15 * x16) +
	      (1 * x0 * x7 * x16 * x17 * x17) == 65474)
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