#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
  int x4;
  int x5;
//Possible solution to enter:
// x0 = -9
// x1 = -7
// x2 = -9
// x3 = -5
// x4 = 3
// x5 = 5
  if ((-1 * x0 * x1 * x4 * x4 * x4 * x4) + (3 * x0 * x2 * x3 * x3 * x3) +
      (-1 * x0 * x4 * x4 * x5) + (-1 * x0 * x1) == -35136)
    {
      printf ("I am here at depth 5");
      if ((2 * x0 * x0 * x1 * x1 * x2 * x3) +
	  (-1 * x0 * x0 * x2 * x2 * x3 * x3) +
	  (1 * x3 * x4 * x4 * x4 * x4 * x4) +
	  (-1 * x0 * x1 * x1 * x3 * x4 * x5) +
	  (-11 * x1 * x3 * x3 * x3 * x4 * x5) +
	  (7 * x0 * x2 * x3 * x4 * x4 * x5) +
	  (-2 * x0 * x1 * x1 * x1 * x5 * x5) +
	  (-2 * x0 * x3 * x3 * x3 * x5 * x5) +
	  (5 * x2 * x2 * x2 * x4 * x5 * x5) +
	  (-1 * x1 * x1 * x4 * x4 * x5 * x5) + (-1 * x0 * x1 * x1 * x3 * x3) +
	  (-1 * x1 * x2 * x2 * x3 * x4) + (-1 * x0 * x2 * x4 * x4 * x4) +
	  (41 * x2 * x2 * x2 * x4 * x5) + (-1 * x0 * x2 * x2 * x5 * x5) +
	  (-1 * x0 * x2 * x5) + (1 * x1 * x2 * x5) == -1037922)
	{
	  printf ("I am here at depth 4");
	  if ((-2 * x0 * x0 * x2 * x2 * x3 * x4) +
	      (5 * x1 * x1 * x3 * x3 * x4 * x4) +
	      (1 * x2 * x2 * x4 * x4 * x4 * x4) +
	      (-1 * x1 * x3 * x4 * x4 * x4 * x4) +
	      (5 * x2 * x2 * x2 * x2 * x3 * x5) + (-2 * x2 * x4 * x4) ==
	      -564282)
	    {
	      printf ("I am here at depth 3");
	      if ((-1 * x1 * x1 * x1 * x1 * x1 * x3) +
		  (-1 * x0 * x0 * x2 * x3 * x3 * x3) +
		  (-117 * x2 * x3 * x4 * x4 * x4 * x4) +
		  (3 * x0 * x1 * x1 * x1 * x2 * x5) +
		  (1 * x1 * x2 * x2 * x3 * x5 * x5) +
		  (-3 * x0 * x3 * x3 * x3 * x5 * x5) +
		  (-4 * x1 * x2 * x4 * x4 * x5 * x5) +
		  (-1 * x0 * x0 * x1 * x2 * x5) +
		  (-2 * x2 * x2 * x4 * x4 * x5) + (-2 * x0 * x0 * x1 * x2) +
		  (1 * x0 * x0 * x2 * x3) + (2 * x1 * x1 * x1 * x4) ==
		  -1129994)
		{
		  printf ("I am here at depth 2");
		  if ((1 * x1 * x1 * x4 * x4 * x4 * x5) +
		      (-8 * x4 * x4 * x4 * x5) == 5535)
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
