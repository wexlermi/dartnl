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
// x0 = 0
// x1 = 1
// x2 = -1
// x3 = -10
// x4 = -2
// x5 = -8
// x6 = 3
// x7 = 10
// x8 = 7
// x9 = 1
// x10 = -5
// x11 = -7
// x12 = 8
// x13 = -5
// x14 = -4
  if ((-1 * x0 * x3 * x10 * x10) + (-1 * x6 * x9 * x11 * x11) +
      (1 * x6 * x9 * x12 * x12) + (1 * x0 * x4 * x12) == 45)
    {
      printf ("I am here at depth 3");
      if ((5 * x3 * x5 * x5 * x9) + (1 * x4 * x6 * x9 * x12) +
	  (24 * x2 * x5 * x11 * x12) == -14000)
	{
	  printf ("I am here at depth 2");
	  if ((-2 * x4 * x4 * x5) + (-1 * x4 * x6 * x7) == 124)
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