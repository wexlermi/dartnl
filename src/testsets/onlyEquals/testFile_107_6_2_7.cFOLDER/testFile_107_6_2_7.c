#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = 5
// x1 = -7
  if ((1 * x0 * x1 * x1) == 245)
    {
      printf ("I am here at depth 6");
      if ((1 * x0 * x0 * x0 * x0 * x0 * x0 * x1) +
	  (2 * x1 * x1 * x1 * x1 * x1 * x1) + (1 * x1 * x1 * x1 * x1 * x1) +
	  (-166 * x1 * x1 * x1 * x1) + (-3 * x1 * x1 * x1) + (-1 * x0 * x1) ==
	  -288386)
	{
	  printf ("I am here at depth 5");
	  if ((-1 * x0 * x0 * x0 * x1 * x1 * x1 * x1) +
	      (2 * x0 * x0 * x1 * x1 * x1 * x1 * x1) +
	      (-1 * x0 * x0 * x0 * x0 * x0 * x0) +
	      (1 * x0 * x0 * x0 * x0 * x1 * x1) +
	      (1 * x0 * x0 * x0 * x0 * x1) + (1 * x1 * x1 * x1 * x1 * x1) +
	      (2 * x0 * x0 * x1 * x1) + (1 * x1 * x1 * x1 * x1) +
	      (-18 * x0 * x0) == -1142256)
	    {
	      printf ("I am here at depth 4");
	      if ((2 * x0 * x0 * x1 * x1 * x1 * x1) +
		  (-1 * x0 * x1 * x1 * x1 * x1 * x1) == 204085)
		{
		  printf ("I am here at depth 3");
		  if ((38 * x0 * x0 * x0 * x0 * x0 * x0 * x0) +
		      (3 * x0 * x0 * x0 * x0 * x1 * x1 * x1) +
		      (-1 * x1 * x1 * x1 * x1 * x1 * x1 * x1) +
		      (-4 * x0 * x0 * x0 * x0 * x0 * x0) +
		      (1 * x0 * x0 * x0 * x1 * x1 * x1) +
		      (-1 * x0 * x0 * x1 * x1 * x1 * x1) +
		      (-1 * x0 * x0 * x0 * x0 * x1) +
		      (2 * x0 * x0 * x0 * x1 * x1) +
		      (-1 * x0 * x0 * x1 * x1 * x1) +
		      (1 * x0 * x0 * x0 * x1) + (1 * x0 * x0 * x1 * x1) +
		      (1 * x1 * x1 * x1 * x1) + (12 * x0 * x0 * x0) +
		      (-2 * x1 * x1 * x1) + (1 * x0 * x0) + (22 * x1) +
		      (6 * 1) == 3013782)
		    {
		      printf ("I am here at depth 2");
		      if ((1 * x0 * x1 * x1 * x1 * x1 * x1 * x1) +
			  (5 * x0 * x0 * x0 * x0 * x0 * x0) +
			  (3 * x0 * x0 * x0 * x0 * x1 * x1) +
			  (1 * x0 * x1 * x1 * x1 * x1 * x1) +
			  (-5 * x0 * x1 * x1 * x1 * x1) +
			  (-2 * x0 * x0 * x0 * x1) +
			  (-1 * x0 * x0 * x1 * x1) + (-10 * x0 * x1 * x1) +
			  (-1 * x1 * x1 * x1) + (-8 * x0) + (-1 * x1) ==
			  612570)
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
