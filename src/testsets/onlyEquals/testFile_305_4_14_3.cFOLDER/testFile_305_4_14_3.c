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
// x0 = 0
// x1 = -3
// x2 = -6
// x3 = -6
// x4 = -2
// x5 = 4
// x6 = 6
// x7 = -3
// x8 = 0
// x9 = -5
// x10 = -6
// x11 = 1
// x12 = -10
// x13 = -10
  if ((2 * x4 * x10 * x11) + (-2 * x0 * x6 * x12) + (-1 * x7) == 27)
    {
      printf ("I am here at depth 4");
      if ((1 * x0 * x0 * x2) + (-1 * x4 * x4 * x9) + (-1 * x3 * x3 * x12) +
	  (-2 * x5 * x5) == 348)
	{
	  printf ("I am here at depth 3");
	  if ((1 * x0 * x6 * x6) + (-2 * x2 * x4 * x10) +
	      (6 * x1 * x11 * x11) + (1 * x2 * x5 * x13) + (15 * x1 * x9) ==
	      591)
	    {
	      printf ("I am here at depth 2");
	      if ((9 * x4 * x7 * x7) + (2 * x0 * x1 * x8) +
		  (-1 * x8 * x11 * x13) + (-3 * x6 * x13 * x13) +
		  (-3 * x4 * x10) == -1998)
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
