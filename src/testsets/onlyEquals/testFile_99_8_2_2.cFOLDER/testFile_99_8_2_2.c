#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = -8
// x1 = -2
  if ((2 * x0 * x0) + (-1 * x1 * x1) + (1 * 1) == 125)
    {
      printf ("I am here at depth 8");
      if ((4 * x0 * x0) + (1 * x1 * x1) + (1 * 1) == 261)
	{
	  printf ("I am here at depth 7");
	  if ((4 * x1) + (-1 * 1) == -9)
	    {
	      printf ("I am here at depth 6");
	      if ((1 * x0) == -8)
		{
		  printf ("I am here at depth 5");
		  if ((-1 * x0 * x1) == -16)
		    {
		      printf ("I am here at depth 4");
		      if ((-6 * x1 * x1) + (-1 * x1) == -22)
			{
			  printf ("I am here at depth 3");
			  if ((-1 * x0 * x1) + (2 * x1 * x1) + (4 * x0) ==
			      -40)
			    {
			      printf ("I am here at depth 2");
			      if ((-1 * x1) + (5 * 1) == 7)
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