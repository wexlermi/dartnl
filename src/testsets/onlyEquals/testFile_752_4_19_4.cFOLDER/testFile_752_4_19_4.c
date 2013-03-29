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
// x0 = 4
// x1 = 5
// x2 = 6
// x3 = 0
// x4 = 9
// x5 = 1
// x6 = -2
// x7 = 0
// x8 = -1
// x9 = -8
// x10 = -4
// x11 = -4
// x12 = -3
// x13 = -1
// x14 = 1
// x15 = 10
// x16 = 10
// x17 = -3
// x18 = 9
  if ((-9 * x5 * x6 * x15 * x15) + (1 * x8 * x12 * x14 * x17) +
      (-1 * x7 * x8 * x17) == 1791)
    {
      printf ("I am here at depth 4");
      if ((1 * x0 * x9 * x10 * x10) + (-44 * x0 * x6 * x12 * x12) +
	  (1 * x7 * x13 * x13 * x18) + (-2 * x5 * x10 * x17 * x18) +
	  (-2 * x4 * x13 * x17 * x18) + (-1 * x1 * x5 * x9) +
	  (627 * x11 * x14 * x15) == -23086)
	{
	  printf ("I am here at depth 3");
	  if ((-4 * x7 * x8 * x9 * x14) + (4 * x0 * x13 * x14 * x15) +
	      (-1 * x13 * x17 * x17 * x17) + (1 * x6 * x13 * x18) == -169)
	    {
	      printf ("I am here at depth 2");
	      if ((-1 * x2 * x6 * x7 * x8) + (2 * x3 * x10 * x10 * x13) +
		  (1 * x4 * x8 * x11 * x15) + (-1 * x2 * x5 * x6 * x16) +
		  (1 * x1 * x8 * x10 * x17) + (-1 * x3 * x3 * x13 * x17) +
		  (2 * x1 * x3 * x17) + (3 * x5 * x17 * x17) == 447)
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
