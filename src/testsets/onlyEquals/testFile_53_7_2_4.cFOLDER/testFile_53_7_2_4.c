#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = 5
// x1 = -8
  if ((3 * x0 * x0 * x0 * x1) + (-4 * x0 * x1 * x1 * x1) + (44 * x0 * x1) ==
      5480)
    {
      printf ("I am here at depth 7");
      if ((3 * x0 * x1 * x1 * x1) + (-1 * x0 * x0 * x1) + (-1 * x0 * x1) +
	  (6 * x1 * x1) + (-1 * 1) == -7057)
	{
	  printf ("I am here at depth 6");
	  if ((-2 * x0 * x0 * x0 * x1) + (2 * x1 * x1 * x1) == 976)
	    {
	      printf ("I am here at depth 5");
	      if ((-1 * x0 * x1 * x1 * x1) + (2 * x1 * x1 * x1 * x1) +
		  (2 * x0 * x0 * x0) + (-6 * x0 * x0 * x1) + (2 * x0 * x0) +
		  (-5 * x1 * x1) + (2 * x0) + (-7 * x1) == 11998)
		{
		  printf ("I am here at depth 4");
		  if ((1 * x1 * x1 * x1) + (-1 * x0) + (-1 * x1) == -509)
		    {
		      printf ("I am here at depth 3");
		      if ((2 * x0 * x0 * x0 * x1) + (5 * x0 * x0 * x1 * x1) +
			  (-1 * x0 * x1 * x1 * x1) + (1 * x1 * x1 * x1 * x1) +
			  (14 * x0 * x0 * x0) + (-10 * x0 * x1 * x1) +
			  (87 * x0) + (3 * x1) == 11617)
			{
			  printf ("I am here at depth 2");
			  if ((2 * x0 * x0 * x1 * x1) + (3 * x0 * x1) == 3080)
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
  else
    {
      printf ("I am at the else of depth 7");
    }
}