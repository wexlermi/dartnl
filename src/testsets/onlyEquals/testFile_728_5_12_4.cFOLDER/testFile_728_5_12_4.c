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
// x0 = 3
// x1 = 8
// x2 = -7
// x3 = 9
// x4 = -3
// x5 = 10
// x6 = 1
// x7 = -10
// x8 = -5
// x9 = -2
// x10 = 5
// x11 = 1
  if ((2 * x0 * x2 * x3 * x3) + (1 * x6 * x6 * x9 * x10) == -3412)
    {
      printf ("I am here at depth 5");
      if ((-2 * x0 * x1 * x1 * x9) + (1 * x5 * x5) == 868)
	{
	  printf ("I am here at depth 4");
	  if ((1 * x7 * x8 * x8 * x8) + (3 * x0 * x7 * x8 * x9) +
	      (-5 * x0 * x7 * x9 * x11) + (3 * x8 * x10) == -25)
	    {
	      printf ("I am here at depth 3");
	      if ((-1 * x0 * x1 * x2 * x11) + (-2 * x1 * x1 * x2 * x11) +
		  (-1 * x0 * x0 * x10 * x11) + (4 * x0 * x0 * x3) +
		  (-2 * x9 * x9 * x9) + (1 * x3 * x3 * x10) +
		  (-2 * x8 * x9 * x10) + (-1 * x3 * x6 * x11) == 1655)
		{
		  printf ("I am here at depth 2");
		  if ((24 * x2 * x2 * x3 * x9) + (1 * x0 * x5 * x9 * x9) +
		      (-3 * x0 * x2 * x3 * x10) + (-10 * x2 * x4 * x9 * x10) +
		      (6 * x1 * x3 * x7 * x11) + (1 * x0 * x9 * x9) == -20421)
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