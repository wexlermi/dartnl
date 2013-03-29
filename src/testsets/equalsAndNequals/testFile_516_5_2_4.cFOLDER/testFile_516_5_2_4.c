#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = -9
// x1 = 5
  if ((-2 * x0 * x1 * x1 * x1) + (1 * x1 * x1 * x1 * x1) +
      (1 * x0 * x0 * x1) + (1 * x0 * x1 * x1) + (-1 * x1 * x1 * x1) +
      (-1 * x1) == 2925)
    {
      printf ("I am here at depth 5");
      if ((2 * x0 * x0 * x0 * x0) + (1 * x0 * x0 * x0 * x1) +
	  (-1 * x0 * x0 * x1 * x1) + (1 * x0 * x1 * x1 * x1) +
	  (5 * x1 * x1 * x1 * x1) + (-1 * x0 * x0) + (5 * x1 * x1) +
	  (1 * 1) == 9497)
	{
	  printf ("I am here at depth 4");
	  if ((-4 * x0 * x0 * x1 * x1) == -8100)
	    {
	      printf ("I am here at depth 3");
	      if ((-2 * x1 * x1 * x1) + (1 * x0 * x1) == -295)
		{
		  printf ("I am here at depth 2");
		  if ((-1 * x0 * x0 * x1 * x1) + (3 * x0 * x1 * x1 * x1) +
		      (-1 * x0 * x0 * x0) + (9 * x0 * x0) + (1 * x1 * x1) ==
		      -3917)
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
