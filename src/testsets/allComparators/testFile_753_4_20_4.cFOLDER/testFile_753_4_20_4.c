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
  int x19;
//Possible solution to enter:
// x0 = -8
// x1 = 9
// x2 = -2
// x3 = 0
// x4 = -7
// x5 = -6
// x6 = 9
// x7 = 4
// x8 = -8
// x9 = 1
// x10 = 0
// x11 = -5
// x12 = 7
// x13 = -9
// x14 = -9
// x15 = 1
// x16 = 6
// x17 = 1
// x18 = 10
// x19 = -2
  if ((3 * x3 * x6 * x8 * x14) + (-7 * x9 * x11 * x12 * x14) +
      (1 * x5 * x10 * x13 * x16) + (1 * x7 * x11 * x15 * x16) +
      (1 * x4 * x16 * x16 * x19) == -1821)
    {
      printf ("I am here at depth 4");
      if ((-7 * x0 * x3 * x5 * x9) + (2 * x3 * x10 * x11 * x14) +
	  (7 * x14 * x17 * x17 * x17) + (1 * x4 * x8 * x16 * x18) +
	  (10 * x0 * x13 * x17) + (2 * x1 * x13 * x19) != 4287)
	{
	  printf ("I am here at depth 3");
	  if ((-1 * x5 * x5 * x9 * x9) + (3 * x1 * x2 * x19 * x19) +
	      (129 * x2 * x12 * x15) + (-9 * x16 * x16 * x16) < -3913)
	    {
	      printf ("I am here at depth 2");
	      if ((-3 * x0 * x1 * x11 * x16) + (6 * x7 * x13 * x14 * x18) +
		  (-1 * x6 * x7 * x14) < 13380)
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
