#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = -5
// x1 = 10
// x2 = 2
  if ((1 * x0 * x0 * x0 * x1) + (-1 * x0 * x0 * x0 * x2) +
      (8 * x0 * x0 * x2 * x2) + (1 * x2 * x2 * x2 * x2) +
      (-146 * x0 * x0 * x1) + (2 * x1 * x2 * x2) + (1 * x0 * x1) == -36654)
    {
      printf ("I am here at depth 6");
      if ((-163 * x0 * x2 * x2 * x2) + (1 * x0 * x0 * x0) == 6395)
	{
	  printf ("I am here at depth 5");
	  if ((-1 * x1 * x1 * x1 * x1) + (-11 * x0 * x0 * x0 * x2) +
	      (2 * x0 * x0 * x2 * x2) + (1 * x1 * x1 * x2 * x2) +
	      (2 * x2 * x2 * x2 * x2) + (1 * x0 * x0 * x0) +
	      (2 * x0 * x1 * x1) + (8 * x1 * x1 * x1) + (1 * x0 * x0) +
	      (1 * x0 * x1) == 232)
	    {
	      printf ("I am here at depth 4");
	      if ((1 * x0 * x0 * x1 * x2) + (1 * x1 * x1 * x2 * x2) +
		  (-3 * x0 * x1 * x1) == 2400)
		{
		  printf ("I am here at depth 3");
		  if ((-2 * x0 * x0 * x0 * x1) + (4 * x1 * x1 * x1 * x2) +
		      (3 * x1 * x1 * x1) == 13500)
		    {
		      printf ("I am here at depth 2");
		      if ((-1 * x0 * x1 * x1 * x2) + (-1 * x1 * x2) +
			  (1 * 1) == 981)
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
