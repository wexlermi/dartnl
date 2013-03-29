#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = -1
// x1 = 6
// x2 = -5
  if ((2 * x0 * x2) + (1 * x2 * x2) != 39)
    {
      printf ("I am here at depth 4");
      if ((-8 * x1 * x2) + (3 * x0) + (1 * x1) != 164)
	{
	  printf ("I am here at depth 3");
	  if ((1 * x0 * x1) <= 85)
	    {
	      printf ("I am here at depth 2");
	      if ((-4 * x2 * x2) + (29 * x1) >= 66)
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
