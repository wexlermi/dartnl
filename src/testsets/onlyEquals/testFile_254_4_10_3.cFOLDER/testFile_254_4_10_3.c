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
//Possible solution to enter:
// x0 = 8
// x1 = 0
// x2 = -8
// x3 = 9
// x4 = 6
// x5 = -7
// x6 = 9
// x7 = -3
// x8 = -10
// x9 = 0
  if ((-1 * x0 * x3 * x5) + (1 * x2 * x4 * x9) == 504)
    {
      printf ("I am here at depth 4");
      if ((-24 * x4 * x4 * x7) + (1 * x0 * x7 * x8) + (6 * x2 * x7 * x9) ==
	  2832)
	{
	  printf ("I am here at depth 3");
	  if ((1 * x0 * x4 * x5) + (2 * x3 * x5 * x7) + (1 * x5 * x7 * x8) +
	      (1 * x3 * x7) + (-6 * x7 * x9) == -195)
	    {
	      printf ("I am here at depth 2");
	      if ((1 * x0 * x6 * x6) + (-1 * x5 * x5 * x9) + (1 * x1 * x1) ==
		  648)
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
