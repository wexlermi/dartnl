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
// x0 = -6
// x1 = 5
// x2 = 7
// x3 = -10
// x4 = -2
// x5 = 0
// x6 = 1
// x7 = 10
// x8 = -1
// x9 = -2
// x10 = 5
// x11 = -6
// x12 = 3
// x13 = 10
// x14 = -5
  if ((2 * x0 * x2 * x6 * x8 * x11 * x12) +
      (-3 * x1 * x2 * x7 * x12 * x12 * x12) +
      (-1 * x0 * x5 * x7 * x9 * x11 * x13) +
      (3 * x7 * x7 * x11 * x11 * x11 * x13) + (-1 * x0 * x4 * x6 * x9 * x11) +
      (-2 * x0 * x6 * x12 * x12) < -677809)
    {
      printf ("I am here at depth 3");
      if ((1 * x6 * x6 * x6 * x6 * x7 * x11) +
	  (2 * x3 * x4 * x4 * x13 * x14 * x14) >= -20083)
	{
	  printf ("I am here at depth 2");
	  if ((-3 * x0 * x6 * x9 * x10 * x11 * x11) +
	      (1 * x0 * x1 * x3 * x3 * x4 * x12) +
	      (-1 * x0 * x1 * x1 * x1 * x12 * x12) +
	      (-1 * x3 * x3 * x7 * x11 * x13 * x13) +
	      (2 * x5 * x5 * x11 * x11 * x13 * x13) +
	      (9 * x1 * x1 * x6 * x8 * x9 * x14) +
	      (-1 * x2 * x8 * x8 * x8 * x9 * x14) +
	      (1 * x3 * x4 * x6 * x12 * x13 * x14) +
	      (-1 * x2 * x5 * x6 * x8 * x10) +
	      (5 * x7 * x8 * x8 * x10 * x12) +
	      (-1 * x5 * x5 * x9 * x12 * x12) +
	      (-23 * x9 * x10 * x13 * x14 * x14) <= 671432)
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
