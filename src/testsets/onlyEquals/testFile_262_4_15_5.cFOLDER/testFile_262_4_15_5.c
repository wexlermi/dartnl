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
// x0 = 10
// x1 = -10
// x2 = 4
// x3 = -4
// x4 = 6
// x5 = -1
// x6 = 3
// x7 = 2
// x8 = 4
// x9 = -4
// x10 = -7
// x11 = 6
// x12 = -6
// x13 = -7
// x14 = 3
  if ((22 * x1 * x2 * x2 * x5 * x8) + (1 * x1 * x3 * x3 * x7 * x8) +
      (-19 * x1 * x3 * x4 * x9 * x9) + (1 * x2 * x3 * x6 * x9 * x11) +
      (1 * x3 * x8 * x8 * x12 * x12) + (-2 * x0 * x4 * x11 * x14 * x14) +
      (3 * x2 * x8 * x10 * x10) + (2 * x2 * x5 * x9 * x12) == -65632)
    {
      printf ("I am here at depth 4");
      if ((-12 * x1 * x2 * x6 * x6 * x9) + (-25 * x0 * x3 * x8 * x11 * x13) +
	  (1 * x1 * x8 * x10 * x12 * x13) + (-1 * x1 * x3 * x11 * x13 * x13) +
	  (-3 * x0 * x3 * x7 * x9 * x14) + (-14 * x0 * x1 * x5 * x11 * x14) +
	  (-1 * x4 * x6 * x12 * x13 * x14) +
	  (-1 * x1 * x5 * x13 * x13 * x14) + (4 * x0 * x2 * x9 * x14) ==
	  -219018)
	{
	  printf ("I am here at depth 3");
	  if ((5 * x2 * x2 * x3 * x3 * x8) == 5120)
	    {
	      printf ("I am here at depth 2");
	      if ((2 * x0 * x1 * x2 * x9 * x10) +
		  (1 * x2 * x3 * x3 * x4 * x11) +
		  (-1 * x0 * x0 * x8 * x12 * x13) +
		  (-7 * x6 * x7 * x7 * x10 * x14) +
		  (2 * x4 * x10 * x10 * x13) + (12 * x7 * x11 * x12 * x14) +
		  (1 * x6 * x7 * x7) == -41828)
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
