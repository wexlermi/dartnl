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
// x0 = 9
// x1 = -2
// x2 = 8
// x3 = -10
// x4 = -2
// x5 = 2
// x6 = 5
// x7 = 3
// x8 = -6
// x9 = 9
// x10 = -7
// x11 = -10
// x12 = -1
// x13 = 1
// x14 = -4
// x15 = 10
// x16 = -7
// x17 = -2
  if ((-1 * x1 * x1 * x1 * x6 * x10) + (-2 * x2 * x2 * x2 * x12 * x14) +
      (-1 * x2 * x4 * x5 * x8 * x16) + (-1 * x2 * x4 * x9 * x14 * x17) +
      (-1 * x3 * x3 * x11 * x15 * x17) + (2 * x2 * x6 * x11 * x17 * x17) +
      (2 * x4 * x5 * x16 * x17 * x17) == -24856)
    {
      printf ("I am here at depth 4");
      if ((1 * x0 * x0 * x9 * x12 * x12) == 729)
	{
	  printf ("I am here at depth 3");
	  if ((1 * x2 * x7 * x8 * x8 * x12) == -864)
	    {
	      printf ("I am here at depth 2");
	      if ((-3 * x2 * x2 * x4 * x4 * x4) +
		  (-1 * x0 * x2 * x7 * x10 * x13) == 3048)
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
