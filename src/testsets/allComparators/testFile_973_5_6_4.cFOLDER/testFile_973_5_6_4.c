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
//Possible solution to enter:
// x0 = 1
// x1 = -6
// x2 = -7
// x3 = 5
// x4 = -10
// x5 = -2
  if ((3 * x2 * x5 * x5) > -130)
    {
      printf ("I am here at depth 5");
      if ((-1 * x2 * x3 * x4 * x5) + (1 * x2 * x4 * x4 * x5) +
	  (33 * x2 * x5 * x5 * x5) + (2 * x1) + (-20 * x3) >= 3742)
	{
	  printf ("I am here at depth 4");
	  if ((3 * x0 * x2 * x3 * x5) + (1 * x0 * x0 * x4 * x5) +
	      (-4 * x2 * x5 * x5 * x5) + (1 * x0 * x5 * x5) + (-2 * 1) == 8)
	    {
	      printf ("I am here at depth 3");
	      if ((-1 * x0 * x0 * x1 * x1) + (-34 * x0 * x2 * x2 * x4) +
		  (-2 * x0 * x4 * x4 * x4) + (5 * x0 * x2 * x5 * x5) >= 18417)
		{
		  printf ("I am here at depth 2");
		  if ((1 * x0 * x2 * x2 * x3) + (1 * x2 * x2 * x5 * x5) +
		      (-1 * x1 * x2 * x3) + (-2 * x0 * x2 * x4) +
		      (-1 * x0 * x1 * x5) + (1 * x0 * x4 * x5) < 156)
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