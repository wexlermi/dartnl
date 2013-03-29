#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = 9
// x1 = -8
// x2 = -6
  if ((-2 * 1) != -88)
    {
      printf ("I am here at depth 5");
      if ((-3 * x2) == 18)
	{
	  printf ("I am here at depth 4");
	  if ((-4 * 1) != 73)
	    {
	      printf ("I am here at depth 3");
	      if ((-2 * x2) == 12)
		{
		  printf ("I am here at depth 2");
		  if ((3 * 1) == 3)
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
