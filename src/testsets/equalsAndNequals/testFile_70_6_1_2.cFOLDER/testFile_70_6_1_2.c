#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
//Possible solution to enter:
// x0 = 1
  if ((-1 * x * x) + (-2 * x) + (1 * 1) == -2)
    {
      printf ("I am here at depth 6");
      if ((-2 * x * x) + (3 * 1) != -77)
	{
	  printf ("I am here at depth 5");
	  if ((-5 * 1) != -49)
	    {
	      printf ("I am here at depth 4");
	      if ((-1 * x) != -15)
		{
		  printf ("I am here at depth 3");
		  if ((-1 * x * x) + (-1 * x) + (7 * 1) != 34)
		    {
		      printf ("I am here at depth 2");
		      if ((4 * x * x) + (-2 * x) + (-29 * 1) != 59)
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
