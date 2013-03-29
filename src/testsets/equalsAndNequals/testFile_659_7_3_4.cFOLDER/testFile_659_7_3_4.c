#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = 8
// x1 = 7
// x2 = -8
  if ((10 * x0 * x0 * x1) + (-3 * x0 * x1 * x2) + (1 * x2 * x2) + (2 * 1) ==
      5890)
    {
      printf ("I am here at depth 7");
      if ((-1 * x0 * x0 * x2 * x2) + (-2 * x0 * x1 * x2 * x2) +
	  (-3 * x2 * x2 * x2 * x2) + (3 * x0 * x0 * x1) +
	  (-1 * x1 * x1 * x1) + (-1 * x0 * x2 * x2) + (-1 * x0 * x0) +
	  (-1 * x1 * x1) == -23176)
	{
	  printf ("I am here at depth 6");
	  if ((-2 * x1 * x2 * x2) == -896)
	    {
	      printf ("I am here at depth 5");
	      if ((-1 * x1 * x1 * x2 * x2) + (-4 * x1 * x2 * x2 * x2) +
		  (-2 * x2 * x2 * x2) + (-1 * x1 * x1) + (5 * x0 * x2) +
		  (-1 * x1 * x2) != 11898)
		{
		  printf ("I am here at depth 4");
		  if ((-3 * x0 * x1 * x1 * x1) + (1 * x0 * x0 * x0 * x2) +
		      (27 * x0 * x0 * x1 * x2) + (-1 * x1 * x2 * x2 * x2) +
		      (-1 * x0 * x1 * x2) + (-4 * x1 * x1 * x2) +
		      (-3 * x1 * x2) + (1 * x1) != -103236)
		    {
		      printf ("I am here at depth 3");
		      if ((-1 * x0 * x1 * x1 * x1) + (2 * x1 * x2 * x2 * x2) +
			  (-1 * x1 * x1 * x1) + (-4 * x0 * x0) +
			  (1 * x0 * x2) + (6 * x2) == -10623)
			{
			  printf ("I am here at depth 2");
			  if ((-1 * x1 * x1 * x1 * x1) +
			      (4 * x0 * x0 * x0 * x2) +
			      (2 * x1 * x1 * x2 * x2) + (2 * x1 * x1 * x1) +
			      (-1 * x0 * x1 * x2) + (7 * x1 * x2 * x2) +
			      (-7 * x2 * x2 * x2) + (1 * x1 * x2) +
			      (-1 * x0) != -4747)
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
