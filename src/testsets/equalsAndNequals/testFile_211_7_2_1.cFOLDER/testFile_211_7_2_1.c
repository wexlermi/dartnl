#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = -4
// x1 = -4
  if ((-1 * x1) == 4)
    {
      printf ("I am here at depth 7");
      if ((1 * 1) != 39)
	{
	  printf ("I am here at depth 6");
	  if ((-8 * x1) == 32)
	    {
	      printf ("I am here at depth 5");
	      if ((1 * x1) != -39)
		{
		  printf ("I am here at depth 4");
		  if ((26 * x1) == -104)
		    {
		      printf ("I am here at depth 3");
		      if ((-1 * x1) != 30)
			{
			  printf ("I am here at depth 2");
			  if ((-1 * x1) == 4)
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
