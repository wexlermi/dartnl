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
// x0 = -10
// x1 = -1
// x2 = -8
// x3 = 7
// x4 = -3
// x5 = -2
// x6 = -3
// x7 = 10
// x8 = 3
// x9 = 6
// x10 = 5
// x11 = 7
// x12 = 0
// x13 = 9
  if ((-1 * x2 * x4 * x4 * x4 * x8) + (1 * x1 * x5 * x5 * x7 * x8) +
      (-1 * x4 * x4 * x6 * x7 * x9) + (1 * x1 * x3 * x9 * x9 * x10) +
      (1 * x3 * x5 * x7 * x10 * x10) + (1 * x0 * x6 * x10 * x11 * x12) +
      (1 * x3 * x6 * x6 * x10 * x13) + (-1 * x7 * x7 * x10 * x11 * x13) +
      (1 * x4 * x9 * x10 * x12 * x13) + (-1 * x3 * x7 * x8 * x13 * x13) +
      (1 * x1 * x4 * x4 * x9) + (1 * x5 * x5 * x8 * x10) +
      (2 * x7 * x9 * x9 * x12) == -49577)
    {
      printf ("I am here at depth 4");
      if ((-1 * x0 * x2 * x5 * x5 * x6) + (1 * x0 * x0 * x5 * x5 * x9) +
	  (1 * x5 * x5 * x5 * x7 * x9) + (-1 * x1 * x3 * x3 * x8 * x9) +
	  (2 * x0 * x1 * x1 * x10 * x10) + (-3 * x1 * x2 * x6 * x11 * x11) +
	  (-3 * x7 * x10 * x13 * x13 * x13) + (-3 * x0 * x4 * x7 * x13) +
	  (-1 * x0 * x6 * x10) == -110810)
	{
	  printf ("I am here at depth 3");
	  if ((-4 * x0 * x4 * x8 * x8 * x12) +
	      (2 * x6 * x9 * x10 * x12 * x13) + (1 * x4 * x6 * x7 * x11) !=
	      593)
	    {
	      printf ("I am here at depth 2");
	      if ((-1 * x4 * x4 * x4 * x4 * x11) +
		  (-1 * x7 * x9 * x12 * x12 * x12) +
		  (4 * x3 * x6 * x6 * x9 * x13) +
		  (-1 * x0 * x0 * x3 * x12 * x13) + (-3 * x0 * x7 * x7 * x7) +
		  (16 * x0 * x6 * x8 * x8) != 47325)
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
