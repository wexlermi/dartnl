#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = 7
// x1 = -9
  if ((-1 * x0 * x0 * x0) <= -260)
    {
      printf ("I am here at depth 6");
      if ((-3 * x0 * x0 * x0 * x0 * x0) + (4 * x0 * x0 * x0 * x0 * x1) +
	  (1 * x0 * x0 * x0 * x1 * x1) + (-2 * x0 * x0 * x1 * x1 * x1) +
	  (-1 * x1 * x1 * x1 * x1 * x1) + (-1 * x0 * x0 * x1 * x1) +
	  (-19 * x1 * x1 * x1 * x1) + (3 * x0 * x1 * x1) + (2 * x0 * x0) +
	  (-2 * x1 * x1) + (1 * x0) + (-1 * x1) < -105510)
	{
	  printf ("I am here at depth 5");
	  if ((15 * x0 * x0 * x0 * x0 * x1) + (1 * x0 * x0 * x0 * x1 * x1) ==
	      -296352)
	    {
	      printf ("I am here at depth 4");
	      if ((11 * x0 * x0 * x0 * x1 * x1) +
		  (2 * x0 * x0 * x1 * x1 * x1) + (-1 * x0 * x1 * x1 * x1) +
		  (72 * x0 * x0 * x0) + (-1 * x0 * x1) + (1 * x1 * x1) +
		  (1 * x0) > 264059)
		{
		  printf ("I am here at depth 3");
		  if ((-8 * x0 * x0 * x0 * x0 * x0) +
		      (-1 * x0 * x0 * x0 * x1 * x1) +
		      (-2 * x0 * x0 * x1 * x1 * x1) +
		      (2 * x1 * x1 * x1 * x1 * x1) +
		      (-2 * x0 * x0 * x0 * x0) + (5 * x0 * x0 * x1 * x1) +
		      (-4 * x0 * x0 * x0) + (2 * x0 * x0 * x1) +
		      (20 * x1 * x1 * x1) + (-6 * x0 * x1) + (14 * x1 * x1) +
		      (-1 * x1) + (-2 * 1) == -209167)
		    {
		      printf ("I am here at depth 2");
		      if ((1 * x0 * x0 * x0 * x0) > 2334)
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
