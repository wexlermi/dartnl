#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = 10
// x1 = -7
  if ((-1 * x0 * x0 * x0 * x1) + (-1 * x0 * x0 * x1 * x1) +
      (1 * x0 * x1 * x1 * x1) + (-2 * x0 * x1 * x1) + (9 * x1 * x1 * x1) +
      (-12 * x0 * x0) + (2 * x0 * x1) + (2 * x0) + (4 * 1) == -6713)
    {
      printf ("I am here at depth 6");
      if ((2 * x0 * x0 * x0 * x1) + (-1 * x1 * x1 * x1 * x1) +
	  (-3 * x0 * x0 * x0) + (1 * x1 * x1 * x1) + (3 * x0) != -19807)
	{
	  printf ("I am here at depth 5");
	  if ((1 * x0 * x0 * x0 * x1) + (8 * x0 * x0 * x1 * x1) +
	      (7 * x1 * x1 * x1 * x1) + (1 * x1) != 48911)
	    {
	      printf ("I am here at depth 4");
	      if ((-2 * x0 * x0 * x0 * x0) + (-1 * x0 * x0 * x0 * x1) +
		  (1 * x0 * x0 * x1 * x1) + (-2 * x0 * x0 * x0) +
		  (-7 * x1 * x1) + (1 * x1) + (2 * 1) != -10402)
		{
		  printf ("I am here at depth 3");
		  if ((-7 * x0 * x1 * x1 * x1) + (-1 * x0 * x0 * x0) +
		      (3 * x0 * x0 * x1) + (-1 * x0 * x0) + (-33 * x0) !=
		      20559)
		    {
		      printf ("I am here at depth 2");
		      if ((1 * x0 * x0 * x0) + (-2 * x0 * x0) +
			  (2 * x1 * x1) + (-1 * x0) != 884)
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
