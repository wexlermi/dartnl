#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = -4
// x1 = 8
// x2 = 3
  if ((-2 * x0 * x0 * x0 * x1 * x1 * x2 * x2) +
      (7 * x0 * x1 * x1 * x1 * x2 * x2 * x2) +
      (1 * x0 * x1 * x1 * x1 * x1 * x2) + (-1 * x0 * x1 * x1 * x1 * x2 * x2) +
      (-4 * x0 * x1 * x1 * x2 * x2 * x2) +
      (-3 * x1 * x1 * x1 * x2 * x2 * x2) + (10 * x0 * x1 * x1 * x1 * x1) +
      (1 * x0 * x1 * x1 * x2 * x2) + (-4 * x0 * x0 * x0 * x1) +
      (1 * x2 * x2 * x2 * x2) + (-1 * x0 * x1) + (-3 * x2 * x2) == -521898)
    {
      printf ("I am here at depth 5");
      if ((3 * x1 * x1 * x1 * x1 * x1 * x1 * x1) +
	  (-2 * x0 * x0 * x0 * x0 * x1 * x1 * x2) +
	  (7 * x1 * x1 * x1 * x1 * x1 * x2 * x2) +
	  (-66 * x0 * x1 * x2 * x2) == 8276544)
	{
	  printf ("I am here at depth 4");
	  if ((1 * x0 * x0 * x0 * x1 * x1 * x1 * x2) +
	      (1 * x1 * x1 * x1 * x1 * x1 * x1) +
	      (-1 * x1 * x1 * x1 * x1 * x1) + (3 * x0 * x1 * x2 * x2) +
	      (-1 * x2) == 130205)
	    {
	      printf ("I am here at depth 3");
	      if ((1 * x1 * x1 * x1 * x1 * x1) + (1 * 1) == 32769)
		{
		  printf ("I am here at depth 2");
		  if ((-2 * x0 * x1 * x1 * x1 * x1 * x1 * x1) +
		      (-1 * x0 * x0 * x0 * x0 * x2 * x2 * x2) +
		      (-1 * x0 * x0 * x0 * x1 * x1 * x1) +
		      (6 * x0 * x0 * x0 * x1 * x2 * x2) +
		      (-8 * x0 * x1 * x2 * x2 * x2 * x2) +
		      (-1 * x0 * x2 * x2 * x2 * x2 * x2) +
		      (-1 * x1 * x1 * x1 * x2 * x2) +
		      (-6 * x0 * x0 * x2 * x2 * x2) +
		      (-3 * x1 * x2 * x2 * x2 * x2) +
		      (-1 * x1 * x2 * x2 * x2) + (7 * x0 * x2) == 2107624)
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
