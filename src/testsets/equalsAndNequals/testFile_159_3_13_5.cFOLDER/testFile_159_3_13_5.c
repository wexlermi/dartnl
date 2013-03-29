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
//Possible solution to enter:
// x0 = 4
// x1 = 9
// x2 = 4
// x3 = 10
// x4 = 2
// x5 = -2
// x6 = -7
// x7 = -4
// x8 = -5
// x9 = 8
// x10 = -9
// x11 = 5
// x12 = 1
  if ((2 * x1 * x3 * x5 * x5 * x9) + (-1 * x1 * x4 * x5 * x9 * x9) +
      (2 * x1 * x5 * x5 * x6 * x12) + (1 * x2 * x6 * x7 * x9 * x12) == 8456)
    {
      printf ("I am here at depth 3");
      if ((2 * x2 * x4 * x7 * x9 * x9) + (3 * x1 * x2 * x6 * x11 * x11) !=
	  -22988)
	{
	  printf ("I am here at depth 2");
	  if ((-3 * x0 * x2 * x4 * x7 * x8) + (1 * x3 * x8 * x8 * x10 * x10) +
	      (5 * x3 * x3 * x5 * x7 * x11) +
	      (-28 * x1 * x2 * x7 * x9 * x11) != 199673)
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
