#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
//Possible solution to enter:
// x0 = -1
  if ((-1 * x) == 1)
    {
      printf ("I am here at depth 5");
      if ((1 * x) == -1)
	{
	  printf ("I am here at depth 4");
	  if ((-2 * x) == 2)
	    {
	      printf ("I am here at depth 3");
	      if ((3 * x) == -3)
		{
		  printf ("I am here at depth 2");
		  if ((1 * x) == -1)
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