#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = -1
// x1 = 7
// x2 = -5
  if ((80 * x0 * x0 * x0 * x2) + (207 * x1 * x1 * x2 * x2) +
      (-1 * x0 * x1 * x2) + (-1 * x2 * x2 * x2) + (1 * x0 * x1) + (-1 * x0) +
      (1 * x2) == 254054)
    {
      printf ("I am here at depth 6");
      if ((-1146 * x0 * x0 * x2) + (1 * x1 * x1) != 5786)
	{
	  printf ("I am here at depth 5");
	  if ((-1 * x1 * x1 * x1 * x1) != -2428)
	    {
	      printf ("I am here at depth 4");
	      if ((-1 * x0 * x0 * x0 * x1) + (-1 * x1 * x1 * x1 * x2) +
		  (-1 * x0 * x2 * x2 * x2) + (-1 * x0 * x0 * x2) +
		  (1 * x1 * x2 * x2) + (-6 * x1 * x1) + (-1 * x2 * x2) +
		  (-2 * x2) != 1491)
		{
		  printf ("I am here at depth 3");
		  if ((3 * x1 * x1 * x1 * x1) + (-1 * x0 * x1 * x2) +
		      (1 * x0 * x0) + (3 * x2 * x2) + (-2 * x0) == 7246)
		    {
		      printf ("I am here at depth 2");
		      if ((6 * x0 * x0 * x0 * x2) + (1 * x0 * x1) +
			  (-2 * x0 * x2) == 13)
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