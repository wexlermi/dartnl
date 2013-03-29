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
// x0 = -8
// x1 = 7
// x2 = 7
// x3 = 3
// x4 = -8
// x5 = 6
// x6 = -5
// x7 = 9
// x8 = 6
// x9 = -8
// x10 = -9
// x11 = 6
// x12 = 9
// x13 = -4
// x14 = -10
// x15 = 6
// x16 = 7
// x17 = 3
  if ((-4 * x0 * x5 * x7 * x10) + (-2 * x3 * x3 * x8 * x10) +
      (-1 * x6 * x8 * x10 * x12) + (8 * x2 * x6 * x6 * x13) +
      (1 * x4 * x11 * x11 * x13) + (-61 * x0 * x9 * x12 * x13) +
      (-18 * x0 * x10 * x10 * x15) + (-3 * x1 * x3 * x15 * x17) +
      (3 * x0 * x10 * x17 * x17) <= 189885)
    {
      printf ("I am here at depth 4");
      if ((1 * x0 * x1 * x4 * x6) + (-2 * x2 * x5 * x6 * x7) +
	  (13 * x7 * x9 * x11 * x13) + (-3 * x1 * x3 * x13 * x13) >= 22960)
	{
	  printf ("I am here at depth 3");
	  if ((1 * x0 * x9 * x12 * x13) + (3 * x0 * x5 * x8 * x14) +
	      (-10 * x8 * x10 * x13 * x14) + (-1 * x2 * x9 * x10 * x16) <=
	      24465)
	    {
	      printf ("I am here at depth 2");
	      if ((1 * x2 * x8 * x9 * x10) + (3 * x3 * x5 * x10 * x10) +
		  (3 * x0 * x0 * x4 * x11) + (1 * x2 * x4 * x5 * x13) +
		  (3 * x0 * x7 * x9 * x14) + (-1 * x2 * x6 * x8 * x15) +
		  (1 * x2 * x2 * x11 * x15) + (1 * x1 * x5 * x13 * x15) >=
		  -15754)
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
