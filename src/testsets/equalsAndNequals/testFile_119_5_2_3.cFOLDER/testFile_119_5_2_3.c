#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = -6
// x1 = 2
  if ((-3 * x0 * x0 * x0) + (-1 * x0 * x0 * x1) + (-1 * x0 * x1 * x1) +
      (-13 * x0) == 678)
    {
      printf ("I am here at depth 5");
      if ((21 * x0 * x0 * x1) + (-1 * x0 * x0) != 1528)
	{
	  printf ("I am here at depth 4");
	  if ((-1 * x1 * x1) == -4)
	    {
	      printf ("I am here at depth 3");
	      if ((2 * x0 * x0 * x1) + (1 * x0 * x1 * x1) +
		  (-42 * x1 * x1 * x1) + (1 * x1) != -116)
		{
		  printf ("I am here at depth 2");
		  if ((-1 * x0 * x1 * x1) + (4 * x0 * x1) + (2 * 1) == -22)
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
