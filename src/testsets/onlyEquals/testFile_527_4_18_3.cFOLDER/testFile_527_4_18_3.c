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
// x0 = 0
// x1 = -3
// x2 = 4
// x3 = -7
// x4 = -10
// x5 = -3
// x6 = 7
// x7 = 3
// x8 = 2
// x9 = 7
// x10 = 2
// x11 = -3
// x12 = -9
// x13 = 6
// x14 = -7
// x15 = -4
// x16 = -5
// x17 = 0
  if ((1 * x1 * x5 * x10) + (-9 * x2 * x7 * x14) == 774)
    {
      printf ("I am here at depth 4");
      if ((-1 * x1 * x2 * x4) + (1 * x13 * x15 * x15) == -24)
	{
	  printf ("I am here at depth 3");
	  if ((-16 * x1 * x1 * x6) + (1 * x2 * x3 * x7) +
	      (4 * x0 * x6 * x10) + (1 * x3 * x9 * x14) +
	      (2 * x7 * x8 * x17) == -749)
	    {
	      printf ("I am here at depth 2");
	      if ((-2 * x1 * x5 * x6) + (1 * x3 * x5 * x8) +
		  (-11 * x1 * x8 * x11) + (-2 * x0 * x12 * x15) == -282)
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
