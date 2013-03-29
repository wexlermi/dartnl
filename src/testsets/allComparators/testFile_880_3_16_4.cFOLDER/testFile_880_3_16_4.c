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
//Possible solution to enter:
// x0 = 4
// x1 = 9
// x2 = -7
// x3 = 0
// x4 = 9
// x5 = 1
// x6 = 10
// x7 = 3
// x8 = 5
// x9 = 8
// x10 = 5
// x11 = -3
// x12 = -7
// x13 = 4
// x14 = -9
// x15 = -3
  if ((1 * x0 * x1 * x4 * x4) + (1 * x0 * x13 * x13 * x14) +
      (-1 * x9 * x10 * x10) + (21 * x0 * x12 * x14) <= 7479)
    {
      printf ("I am here at depth 3");
      if ((-5 * x0 * x1 * x3 * x10) + (1 * x2 * x3 * x5 * x12) +
	  (8 * x2 * x3 * x12 * x12) + (-7 * x0 * x1 * x10 * x14) +
	  (-1 * x4 * x5 * x14 * x14) + (3 * x1 * x5) + (4 * x2 * x15) < 10784)
	{
	  printf ("I am here at depth 2");
	  if ((-4 * x2 * x2 * x3 * x10) + (-2 * x1 * x9 * x12 * x13) +
	      (-122 * x2 * x7 * x8 * x14) + (1 * x0 * x4 * x6 * x15) +
	      (7 * x3 * x4 * x12 * x15) + (-1 * x3 * x6 * x12) != -112269)
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
