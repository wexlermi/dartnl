#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = -5
// x1 = -8
// x2 = 5
// x3 = -5
  if ((8 * x3 * x3) == 200)
    {
      printf ("I am here at depth 7");
      if ((148 * x0 * x1) + (-2 * x1 * x3) + (2 * x2) != 5855)
	{
	  printf ("I am here at depth 6");
	  if ((5 * x3 * x3) != 219)
	    {
	      printf ("I am here at depth 5");
	      if ((1 * x0 * x2) != -123)
		{
		  printf ("I am here at depth 4");
		  if ((22 * x0 * x2) + (1 * 1) != -577)
		    {
		      printf ("I am here at depth 3");
		      if ((-1 * x0 * x1) + (1 * x3 * x3) == -15)
			{
			  printf ("I am here at depth 2");
			  if ((-2 * x0) != 105)
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
