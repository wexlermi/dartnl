#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = 6
// x1 = -3
// x2 = -10
  if ((-5 * x0 * x1 * x2 * x2 * x2 * x2 * x2) +
      (-6 * x0 * x0 * x1 * x2 * x2 * x2) +
      (12 * x1 * x1 * x2 * x2 * x2 * x2) + (-1 * x0 * x0 * x0 * x2 * x2) +
      (2 * x1 * x2 * x2 * x2) == -8583600)
    {
      printf ("I am here at depth 4");
      if ((-1 * x0 * x0 * x0 * x0 * x0 * x0 * x1) +
	  (2 * x0 * x0 * x0 * x1 * x1 * x1 * x1) +
	  (-1 * x0 * x0 * x1 * x1 * x1 * x1 * x2) +
	  (6 * x0 * x1 * x1 * x1 * x1 * x1 * x2) +
	  (-1 * x0 * x2 * x2 * x2 * x2 * x2) + (1 * x0 * x0 * x1 * x1 * x2) +
	  (-3 * x0 * x0 * x2 * x2 * x2) + (1 * x0 * x2 * x2 * x2 * x2) +
	  (-1 * x2 * x2 * x2) + (-1 * x1 * x1) == 1057351)
	{
	  printf ("I am here at depth 3");
	  if ((-1 * x0 * x1 * x1 * x2 * x2 * x2 * x2) +
	      (1 * x0 * x1 * x2 * x2 * x2) + (1 * x2 * x2 * x2 * x2 * x2) ==
	      -622000)
	    {
	      printf ("I am here at depth 2");
	      if ((-8 * x0 * x0 * x0 * x0 * x0 * x0 * x2) +
		  (-2 * x0 * x0 * x0 * x0 * x0 * x2 * x2) +
		  (15 * x1 * x1 * x1 * x1 * x1 * x2 * x2) +
		  (1 * x0 * x0 * x0 * x0 * x0 * x0) +
		  (-14 * x0 * x0 * x1 * x1 * x2 * x2) +
		  (-14 * x1 * x1 * x2 * x2 * x2 * x2) +
		  (4 * x1 * x2 * x2 * x2 * x2 * x2) +
		  (2 * x0 * x0 * x2 * x2) + (-8 * x0 * x1 * x2 * x2) +
		  (-2 * x2 * x2 * x2 * x2) + (3 * x0 * x0 * x1) +
		  (2 * x0 * x1 * x1) + (1 * x0 * x1 * x2) +
		  (-1 * x0 * x2 * x2) + (-1 * x1 * x2 * x2) == 1347100)
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
