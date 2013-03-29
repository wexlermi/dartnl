#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = -5
// x1 = -10
  if ((1 * x0 * x0 * x1 * x1 * x1) <= -24912)
    {
      printf ("I am here at depth 6");
      if ((3 * x0 * x1 * x1 * x1 * x1) < -149969)
	{
	  printf ("I am here at depth 5");
	  if ((-3 * x0 * x1) < -125)
	    {
	      printf ("I am here at depth 4");
	      if ((1 * x0 * x0 * x0 * x0 * x0 * x1) +
		  (4 * x0 * x1 * x1 * x1 * x1) + (3 * x0 * x0 * x1 * x1) >
		  -161302)
		{
		  printf ("I am here at depth 3");
		  if ((2 * x0 * x0 * x0 * x1 * x1 * x1) +
		      (-14 * x0 * x1 * x1 * x1 * x1) +
		      (1 * x0 * x0 * x0 * x1) + (-3 * x0 * x0 * x1 * x1) +
		      (-1 * x0 * x0 * x0) + (2 * x0 * x0 * x1) +
		      (-1 * x1 * x1) + (1 * x0) + (1 * 1) <= 943307)
		    {
		      printf ("I am here at depth 2");
		      if ((-1 * x1 * x1 * x1) + (-1 * x1 * x1) >= 864)
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
  else
    {
      printf ("I am at the else of depth 6");
    }
}
