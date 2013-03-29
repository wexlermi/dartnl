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
//Possible solution to enter:
// x0 = 4
// x1 = 0
// x2 = 4
// x3 = -10
// x4 = -6
// x5 = -2
// x6 = -10
// x7 = 1
// x8 = -2
// x9 = 2
// x10 = -2
// x11 = 2
// x12 = 3
// x13 = -3
  if ((-2 * x0 * x2 * x5 * x9 * x9) + (-1 * x5 * x5 * x6 * x7 * x10) +
      (-1 * x3 * x3 * x3 * x9 * x10) + (-1 * x1 * x2 * x7 * x9 * x10) +
      (1 * x2 * x3 * x5 * x7 * x11) + (1 * x2 * x3 * x5 * x8 * x12) +
      (2 * x4 * x5 * x12 * x12 * x13) + (1 * x5 * x7 * x8 * x8) +
      (-1 * x1 * x4 * x5 * x10) + (2 * x3 * x4 * x4 * x11) +
      (1 * x2 * x2 * x7 * x11) + (-1 * x1 * x5 * x7 * x11) +
      (1 * x2 * x2 * x12 * x12) > -6149)
    {
      printf ("I am here at depth 4");
      if ((-3 * x3 * x4 * x4 * x7 * x11) + (-2 * x6 * x6 * x7 * x10 * x12) +
	  (1 * x4 * x9 * x9 * x10) + (16 * x7 * x7 * x11) == 3440)
	{
	  printf ("I am here at depth 3");
	  if ((-5 * x0 * x0 * x0 * x2 * x2) + (-3 * x0 * x2 * x2 * x2 * x5) +
	      (28 * x0 * x0 * x0 * x1 * x7) + (2 * x3 * x5 * x5 * x10 * x11) +
	      (1 * x2 * x9 * x11 * x11 * x12) +
	      (-2 * x3 * x6 * x9 * x9 * x13) >= -778)
	    {
	      printf ("I am here at depth 2");
	      if ((-1 * x2 * x4 * x10 * x11 * x11) +
		  (-1 * x1 * x1 * x9 * x10 * x13) != -285)
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
