#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = -3
// x1 = 2
// x2 = -4
// x3 = -3
  if ((1 * x0 * x0 * x3 * x3) + (2 * x0 * x0 * x0) + (2 * x0 * x1 * x1) +
      (1 * x1 * x3 * x3) + (11 * x3 * x3) + (2 * x0) == 114)
    {
      printf ("I am here at depth 8");
      if ((1 * x0 * x0 * x0 * x3) + (1 * x1 * x1 * x3) + (2 * x2 * x3 * x3) +
	  (4 * x1) == 5)
	{
	  printf ("I am here at depth 7");
	  if ((-1 * x0 * x0 * x0 * x3) + (-23 * x0 * x0 * x1 * x3) +
	      (1 * x0 * x2 * x2 * x3) + (1 * x0 * x2 * x2) +
	      (-1 * x1 * x2 * x2) + (-3 * x0 * x3) + (-2 * x1 * x3) == 1210)
	    {
	      printf ("I am here at depth 6");
	      if ((-1 * x0 * x2 * x2) + (-2 * 1) == 46)
		{
		  printf ("I am here at depth 5");
		  if ((-1 * x0 * x0 * x0 * x1) + (2 * x0 * x0 * x2 * x3) +
		      (-1 * x1 * x1 * x2 * x3) + (-453 * x0 * x2 * x3) ==
		      16530)
		    {
		      printf ("I am here at depth 4");
		      if ((2 * x1 * x1 * x2 * x2) == 128)
			{
			  printf ("I am here at depth 3");
			  if ((1 * x1 * x2 * x3 * x3) + (-1 * x0 * x0 * x3) +
			      (1 * x0) == -48)
			    {
			      printf ("I am here at depth 2");
			      if ((4 * x0 * x0 * x1 * x2) +
				  (-11 * x1 * x1 * x3 * x3) +
				  (-1 * x2 * x3 * x3 * x3) +
				  (1 * x1 * x1 * x3) + (1 * x2 * x3 * x3) +
				  (-3 * x1 * x2) + (-3 * x1 * x3) +
				  (-3 * x3) == -789)
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
