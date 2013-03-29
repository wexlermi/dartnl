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
//Possible solution to enter:
// x0 = 6
// x1 = -3
// x2 = -4
// x3 = 5
// x4 = -1
// x5 = 6
// x6 = 0
// x7 = -10
// x8 = -4
// x9 = 3
// x10 = 2
  if ((1 * x1 * x1 * x9) + (1 * x1 * x4 * x9) + (-5 * x4 * x6 * x9) == 36)
    {
      printf ("I am here at depth 5");
      if ((2 * x1 * x8 * x8) + (-1 * x4 * x7 * x9) + (16 * x1 * x1 * x10) +
	  (-4 * x1 * x7 * x10) + (2 * x9 * x9 * x10) + (10 * x9 * x10) == 18)
	{
	  printf ("I am here at depth 4");
	  if ((-2 * x3 * x4 * x5) + (-1 * x4 * x7 * x8) +
	      (-1 * x3 * x8 * x10) == 140)
	    {
	      printf ("I am here at depth 3");
	      if ((7 * x8 * x9 * x9) + (1 * x2 * x7 * x10) + (3 * x0 * x9) ==
		  -118)
		{
		  printf ("I am here at depth 2");
		  if ((-1 * x1 * x6 * x7) + (1 * x4 * x6 * x8) +
		      (1 * x2 * x7) + (-7 * x3 * x7) == 390)
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
  else
    {
      printf ("I am at the else of depth 5");
    }
}
