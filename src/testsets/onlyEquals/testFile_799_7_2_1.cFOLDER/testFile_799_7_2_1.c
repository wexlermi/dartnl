#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = -3
// x1 = -10
  if ((-3 * 1) == -3)
    {
      printf ("I am here at depth 7");
      if ((1 * x1) == -10)
	{
	  printf ("I am here at depth 6");
	  if ((1 * x1) == -10)
	    {
	      printf ("I am here at depth 5");
	      if ((4 * 1) == 4)
		{
		  printf ("I am here at depth 4");
		  if ((1 * x1) == -10)
		    {
		      printf ("I am here at depth 3");
		      if ((-4 * x1) == 40)
			{
			  printf ("I am here at depth 2");
			  if ((13 * x1) == -130)
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