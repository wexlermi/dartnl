#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = -6
// x1 = -5
// x2 = 0
// x3 = -5
  if ((-1 * x3) != 18)
    {
      printf ("I am here at depth 7");
      if ((-1 * x2) != 30)
	{
	  printf ("I am here at depth 6");
	  if ((-9 * x2) == 0)
	    {
	      printf ("I am here at depth 5");
	      if ((1 * x3) != 16)
		{
		  printf ("I am here at depth 4");
		  if ((-3 * x2) == 0)
		    {
		      printf ("I am here at depth 3");
		      if ((-1 * 1) != -78)
			{
			  printf ("I am here at depth 2");
			  if ((1 * x2) != -53)
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
