#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
//Possible solution to enter:
// x0 = -10
  if ((1 * x * x) + (1 * x) + (-1 * 1) == 89)
    {
      printf ("I am here at depth 6");
      if ((-1 * x * x) + (1 * x) != -180)
	{
	  printf ("I am here at depth 5");
	  if ((1 * x * x) != 192)
	    {
	      printf ("I am here at depth 4");
	      if ((1 * x * x) + (-1 * x) != 147)
		{
		  printf ("I am here at depth 3");
		  if ((-2 * 1) == -2)
		    {
		      printf ("I am here at depth 2");
		      if ((15 * x) == -150)
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