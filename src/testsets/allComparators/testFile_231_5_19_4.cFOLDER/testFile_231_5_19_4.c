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
  int x18;
//Possible solution to enter:
// x0 = 5
// x1 = -8
// x2 = -4
// x3 = -6
// x4 = -5
// x5 = -8
// x6 = -2
// x7 = -2
// x8 = 7
// x9 = 7
// x10 = 6
// x11 = 0
// x12 = -4
// x13 = 1
// x14 = 0
// x15 = 1
// x16 = 2
// x17 = 4
// x18 = -5
  if ((-1 * x2 * x2 * x9 * x15) + (1 * x2 * x5 * x16 * x17) +
      (-1 * x2 * x13 * x17 * x18) < 101)
    {
      printf ("I am here at depth 5");
      if ((-1 * x1 * x4 * x5 * x10) + (-2 * x9 * x10 * x15 * x16) +
	  (-1 * x3 * x10 * x15 * x17) + (-3 * x7 * x8 * x16 * x17) +
	  (-6 * x1 * x10 * x14 * x18) + (4 * x9 * x17 * x17 * x18) +
	  (3 * x13 * x15 * x18 * x18) + (2 * x11 * x13 * x14) == 67)
	{
	  printf ("I am here at depth 4");
	  if ((-1 * x2 * x2 * x3 * x4) + (-2 * x2 * x4 * x12 * x12) +
	      (2 * x0 * x7 * x13 * x13) + (1 * x2 * x10 * x13 * x17) +
	      (-1 * x0 * x0 * x9 * x18) + (2 * x7 * x13 * x14 * x18) +
	      (-4 * x3 * x13 * x17) >= -290)
	    {
	      printf ("I am here at depth 3");
	      if ((-4 * x0 * x1 * x7 * x9) + (1 * x0 * x2 * x4 * x14) +
		  (1 * x1 * x6 * x16 * x16) + (3 * x9 * x10 * x16 * x16) +
		  (-1 * x1 * x12 * x17 * x17) + (4 * x3 * x8 * x18) < -1266)
		{
		  printf ("I am here at depth 2");
		  if ((-1 * x1 * x7 * x8 * x8) + (4 * x5 * x11 * x15 * x15) +
		      (1 * x2 * x7 * x16 * x16) + (-1 * x7 * x7 * x8) +
		      (-32 * x3 * x11 * x14) + (1 * x6 * x14 * x18) == -780)
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