#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = 3
// x1 = -10
// x2 = 8
// x3 = 6
  if ((-3 * x1 * x1 * x1 * x2 * x2 * x2) +
      (-1 * x1 * x1 * x2 * x2 * x2 * x3) +
      (-2 * x0 * x0 * x1 * x3 * x3 * x3) + (1 * x0 * x0 * x3 * x3 * x3 * x3) +
      (2 * x0 * x0 * x0 * x1 * x1) + (4 * x0 * x2 * x2 * x2 * x2) +
      (-25 * x0 * x0 * x1 * x2 * x3) + (-1 * x1 * x1 * x1 * x3 * x3) +
      (-3 * x0 * x3 * x3 * x3) + (-4 * x0 * x1) == 1476072)
    {
      printf ("I am here at depth 4");
      if ((1 * x1 * x1 * x1 * x1 * x1 * x1) +
	  (1 * x0 * x1 * x1 * x2 * x2 * x2) +
	  (3 * x0 * x0 * x2 * x2 * x2 * x2) +
	  (-1 * x1 * x2 * x2 * x2 * x2 * x2) +
	  (4 * x2 * x2 * x2 * x2 * x2 * x2) +
	  (-2 * x0 * x1 * x1 * x1 * x1 * x3) +
	  (-9 * x0 * x0 * x1 * x1 * x2 * x3) + (1 * x1 * x1 * x2 * x2 * x2) +
	  (-2 * x0 * x0 * x0 * x0 * x3) + (-1 * x1 * x1 * x2 * x2 * x3) +
	  (3 * x0 * x0 * x0 * x3 * x3) == 1906392)
	{
	  printf ("I am here at depth 3");
	  if ((2 * x0 * x1 * x2 * x3 * x3 * x3) + (2 * x0 * x2 * x2 * x3) ==
	      -101376)
	    {
	      printf ("I am here at depth 2");
	      if ((1 * x0 * x0 * x0 * x0 * x2 * x2) +
		  (-19 * x0 * x0 * x1 * x2 * x2 * x3) +
		  (-2 * x0 * x1 * x1 * x2 * x3 * x3) +
		  (-2 * x1 * x2 * x2 * x2 * x3 * x3) +
		  (-6 * x0 * x1 * x3 * x3 * x3 * x3) +
		  (-1 * x0 * x0 * x0 * x1 * x1) +
		  (-1 * x1 * x1 * x1 * x1 * x2) +
		  (-1 * x0 * x0 * x0 * x1 * x3) +
		  (-8 * x1 * x1 * x1 * x1 * x3) +
		  (-1 * x3 * x3 * x3 * x3 * x3) + (1 * x1 * x1 * x1 * x2) +
		  (-1 * x0 * x1 * x2 * x3) + (-1 * x0 * x1 * x3 * x3) +
		  (-1 * x0 * x0 * x2) + (-2 * x1 * x1 * x2) + (1 * x0) ==
		  514939)
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
