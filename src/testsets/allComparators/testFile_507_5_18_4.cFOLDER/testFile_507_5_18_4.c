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
// x1 = 9
// x2 = 6
// x3 = -2
// x4 = -1
// x5 = 1
// x6 = 5
// x7 = -4
// x8 = 8
// x9 = -10
// x10 = 9
// x11 = -8
// x12 = -3
// x13 = 7
// x14 = -3
// x15 = -2
// x16 = 8
// x17 = -9
  if ((-8 * x3 * x5 * x6 * x9) + (57 * x1 * x5 * x5 * x15) +
      (-4 * x3 * x3 * x10 * x16) + (-1 * x1 * x11 * x11 * x16) +
      (1 * x10 * x12 * x15 * x16) + (-3 * x0 * x10 * x11) +
      (-9 * x2 * x12 * x12) + (-3 * x4 * x16 * x17) < -10002)
    {
      printf ("I am here at depth 5");
      if ((5 * x0 * x0 * x4 * x4) + (24 * x3 * x3 * x7 * x12) +
	  (1 * x3 * x9 * x9 * x14) + (1 * x0 * x10 * x11 * x15) +
	  (-1 * x1 * x2 * x13 * x15) + (-1 * x5 * x6 * x9 * x17) +
	  (1 * x8 * x12 * x13 * x17) + (5 * x9 * x12 * x12) +
	  (4 * x10 * x11 * x15) > 2695)
	{
	  printf ("I am here at depth 4");
	  if ((-32 * x2 * x5 * x7 * x11) + (-3 * x0 * x0 * x9 * x14) +
	      (1 * x3 * x7 * x9) + (-1 * x0 * x4 * x13) +
	      (-20 * x8 * x13 * x17) > -5217)
	    {
	      printf ("I am here at depth 3");
	      if ((2 * x4 * x4 * x6 * x7) + (1 * x1 * x3 * x8 * x10) +
		  (11 * x6 * x6 * x13 * x17) + (1 * x8 * x13 * x14) >= -18839)
		{
		  printf ("I am here at depth 2");
		  if ((-1 * x2 * x9 * x14 * x14) +
		      (-1 * x3 * x6 * x12 * x16) + (1 * x3 * x4 * x15 * x16) >
		      251)
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
  else
    {
      printf ("I am at the else of depth 5");
    }
}
