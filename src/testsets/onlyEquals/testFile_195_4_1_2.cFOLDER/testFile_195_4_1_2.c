#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
//Possible solution to enter:
// x0 = 0
  if ((-1 * x * x) + (-1 * x) == 0)
    {
      printf ("I am here at depth 4");
      if ((3 * x * x) + (3 * x) + (-2 * 1) == -2)
	{
	  printf ("I am here at depth 3");
	  if ((-2 * x * x) + (-1 * x) + (6 * 1) == 6)
	    {
	      printf ("I am here at depth 2");
	      if ((1 * x * x) == 0)
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
