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
//Possible solution to enter:
// x0 = 10
// x1 = 6
// x2 = 9
// x3 = 2
// x4 = 5
// x5 = 4
// x6 = -3
// x7 = -3
// x8 = 8
// x9 = 1
// x10 = 2
// x11 = -2
  if ((7 * x3 * x3 * x3 * x4 * x5) + (2 * x1 * x4 * x5 * x6 * x6) +
      (1 * x1 * x3 * x5 * x8 * x9) + (-1 * x2 * x4 * x9 * x11 * x11) +
      (-1 * x0 * x3 * x3) + (-6 * x1 * x1 * x9) == 3228)
    {
      printf ("I am here at depth 4");
      if ((-7 * x2 * x2 * x5 * x7 * x8) + (2 * x8 * x8 * x8 * x8 * x8) +
	  (12 * x3 * x3 * x5 * x8 * x9) + (-1 * x3 * x8 * x9 * x10) +
	  (-1 * x1 * x6 * x7 * x11) + (-1 * x0 * x7 * x7 * x11) == 121760)
	{
	  printf ("I am here at depth 3");
	  if ((1 * x0 * x0 * x1 * x5 * x7) + (6 * x1 * x4 * x6 * x7 * x7) +
	      (-1 * x1 * x1 * x1 * x5 * x9) + (-1 * x2 * x3 * x5 * x7 * x10) +
	      (1 * x2 * x3 * x3 * x5 * x11) + (-1 * x3 * x5 * x8 * x9 * x11) +
	      (-1 * x1 * x2 * x6 * x6) + (1 * x3 * x4 * x7 * x7) +
	      (1 * x2 * x3 * x10) + (7 * x4) == -12977)
	    {
	      printf ("I am here at depth 2");
	      if ((4 * x0 * x3 * x5 * x5 * x10) +
		  (-6 * x1 * x1 * x5 * x9 * x10) == 832)
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
