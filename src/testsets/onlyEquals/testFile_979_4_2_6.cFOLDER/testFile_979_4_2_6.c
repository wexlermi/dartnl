#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = 4
// x1 = -8
  if ((-1 * x0 * x0 * x0 * x1 * x1 * x1) + (3 * x0 * x1 * x1 * x1 * x1 * x1) +
      (3 * x1 * x1 * x1 * x1 * x1 * x1) + (-5 * x0 * x0 * x0 * x0 * x0) +
      (-1 * x0 * x0 * x1 * x1 * x1) + (7 * x1 * x1 * x1 * x1 * x1) +
      (1 * x0 * x0 * x1 * x1) + (1 * x0 * x0 * x0) + (-12 * x0 * x0) +
      (1 * 1) == 200577)
    {
      printf ("I am here at depth 4");
      if ((3 * x1 * x1 * x1 * x1 * x1 * x1) + (1 * x1 * x1 * x1) == 785920)
	{
	  printf ("I am here at depth 3");
	  if ((1 * x0 * x0 * x0 * x0 * x0 * x0) +
	      (-2 * x0 * x0 * x0 * x0 * x0) + (1 * x0 * x0 * x0 * x1 * x1) +
	      (-1 * x0 * x0 * x0 * x0) + (16 * x0 * x0 * x0) +
	      (1 * x0 * x0 * x1) + (1 * x0 * x1) + (-1 * x0) + (-3 * 1) ==
	      6745)
	    {
	      printf ("I am here at depth 2");
	      if ((-4 * x0 * x0 * x0 * x0 * x1 * x1) +
		  (1 * x0 * x1 * x1 * x1 * x1 * x1) +
		  (-1 * x0 * x0 * x1 * x1) + (1 * x0 * x1 * x1) == -197376)
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