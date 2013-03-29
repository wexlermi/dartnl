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
// x1 = -7
// x2 = 9
// x3 = -2
// x4 = 3
// x5 = 0
  if ((2 * x0 * x3 * x3 * x3) + (4 * x2 * x2 * x5 * x5) +
      (-2 * x0 * x4 * x4) + (-4 * x2 * x4 * x4) == -358)
    {
      printf ("I am here at depth 8");
      if ((-1 * x1 * x1 * x2 * x2) + (-2 * x0 * x2 * x3 * x4) +
	  (-1 * x1 * x3 * x4 * x4) + (-1 * x1 * x3 * x4) +
	  (-1 * x3 * x3 * x5) == -4029)
	{
	  printf ("I am here at depth 7");
	  if ((-2 * x1 * x1 * x1 * x1) + (1 * x2 * x3 * x3 * x3) +
	      (-1 * x2 * x2 * x3 * x5) + (-7 * x4 * x4 * x4 * x5) +
	      (6 * x1 * x1 * x2) + (-1 * x1 * x2 * x2) + (1 * x3 * x3 * x3) !=
	      -1722)
	    {
	      printf ("I am here at depth 6");
	      if ((-1 * x2 * x4 * x4 * x4) + (5 * x0 * x0 * x0) +
		  (-6 * x3 * x3 * x3) + (1 * x0 * x3 * x4) + (1 * x0 * x5) !=
		  -176)
		{
		  printf ("I am here at depth 5");
		  if ((1 * x1 * x1 * x1 * x2) + (37 * x2 * x2 * x2 * x5) +
		      (1 * x1 * x1 * x2) + (9 * x0 * x0 * x4) +
		      (2 * x3 * x5) == -2619)
		    {
		      printf ("I am here at depth 4");
		      if ((-1 * x0 * x2 * x3 * x4) + (5 * x1 * x1 * x3 * x5) +
			  (-1 * x0 * x3 * x4 * x5) + (-5 * x2 * x2 * x3) +
			  (1 * x2 * x2 * x5) == 864)
			{
			  printf ("I am here at depth 3");
			  if ((2 * x0 * x0 * x1 * x3) + (-3 * x1 * x2 * x3) +
			      (-1 * x1 * x1 * x5) + (-5 * x1 * x4) != -238)
			    {
			      printf ("I am here at depth 2");
			      if ((1 * x4 * x4 * x5 * x5) != -68)
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
  else
    {
      printf ("I am at the else of depth 8");
    }
}
