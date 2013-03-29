#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = -9
// x1 = -9
  if ((1 * x0 * x1 * x1) + (-1 * x0) == -720)
    {
      printf ("I am here at depth 5");
      if ((1 * x0 * x0 * x0 * x0 * x0 * x0) +
	  (1 * x0 * x0 * x0 * x0 * x0 * x1) +
	  (-2 * x1 * x1 * x1 * x1 * x1 * x1) + (20 * x0 * x0 * x0 * x0 * x1) +
	  (1 * x0 * x0 * x0 * x1 * x1) + (2 * x0 * x0 * x1 * x1 * x1) +
	  (3 * x1 * x1 * x1 * x1 * x1) + (-3 * x0 * x0 * x0 * x1) +
	  (-12 * x0 * x0 * x1 * x1) + (-1 * x1 * x1 * x1 * x1) +
	  (-8 * x0 * x1) + (9 * x0) + (11 * 1) == -1640968)
	{
	  printf ("I am here at depth 4");
	  if ((1 * x0 * x0 * x1 * x1 * x1 * x1) +
	      (-2 * x0 * x1 * x1 * x1 * x1 * x1) +
	      (-4 * x1 * x1 * x1 * x1 * x1 * x1) +
	      (-1 * x0 * x1 * x1 * x1 * x1) + (-3 * x1 * x1 * x1 * x1 * x1) +
	      (-2 * x0 * x0 * x0 * x1) + (-11 * x0 * x0 * x1 * x1) +
	      (2 * x0 * x0 * x0) == -2507760)
	    {
	      printf ("I am here at depth 3");
	      if ((-1 * x0 * x0 * x0 * x0 * x0 * x1) +
		  (-1 * x0 * x0 * x1 * x1 * x1 * x1) +
		  (-1 * x0 * x0 * x0 * x0 * x0) + (8 * x1 * x1 * x1 * x1) +
		  (-1 * x0 * x1 * x1) + (5 * x1 * x1) == -950211)
		{
		  printf ("I am here at depth 2");
		  if ((2 * x0 * x0 * x0 * x0 * x0 * x0) +
		      (1 * x0 * x0 * x0 * x0 * x1 * x1) +
		      (-1 * x1 * x1 * x1 * x1 * x1 * x1) +
		      (1 * x0 * x0 * x0 * x0 * x1) +
		      (-1 * x0 * x1 * x1 * x1 * x1) +
		      (2 * x1 * x1 * x1 * x1 * x1) + (3 * x0 * x0 * x0 * x0) +
		      (112 * x0 * x1 * x1 * x1) + (-1 * x1 * x1 * x1 * x1) +
		      (23 * x0 * x0 * x1) + (-3 * x0 * x1 * x1) +
		      (-1 * x0 * x0) + (1 * x1 * x1) + (110 * x0) + (1 * x1) +
		      (-1 * 1) == 1677158)
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
