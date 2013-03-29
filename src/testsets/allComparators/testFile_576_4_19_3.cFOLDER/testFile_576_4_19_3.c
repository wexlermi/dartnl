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
// x0 = 7
// x1 = 1
// x2 = -10
// x3 = 1
// x4 = 9
// x5 = 8
// x6 = -4
// x7 = -5
// x8 = -7
// x9 = 8
// x10 = -1
// x11 = 6
// x12 = -2
// x13 = 8
// x14 = -3
// x15 = 8
// x16 = -6
// x17 = -1
// x18 = 7
  if ((-1 * x4 * x6 * x14) + (1 * x4 * x11 * x17) + (2 * x11 * x16 * x17) +
      (-2 * x0 * x6) <= 65)
    {
      printf ("I am here at depth 4");
      if ((1 * x0 * x1 * x6) + (3 * x3 * x11 * x16) < -135)
	{
	  printf ("I am here at depth 3");
	  if ((1 * x0 * x4 * x14) + (-1 * x4 * x8 * x18) +
	      (2 * x10 * x17 * x18) + (1 * x1 * x16) > 181)
	    {
	      printf ("I am here at depth 2");
	      if ((2 * x1 * x9 * x14) + (-2 * x10 * x13 * x14) +
		  (-1 * x4 * x14) < -23)
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
