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
// x0 = -8
// x1 = -1
// x2 = 3
// x3 = -9
// x4 = 5
// x5 = -1
  if ((1 * x2 * x2 * x3 * x4 * x4) + (1 * x0 * x0 * x0) == -2537)
    {
      printf ("I am here at depth 6");
      if ((-1 * x1 * x2 * x2 * x2 * x3) + (-8 * x1 * x1 * x2 * x3 * x3) +
	  (-3 * x2 * x2 * x4 * x4 * x5) + (-6 * x0 * x3 * x3 * x5 * x5) +
	  (1 * x0 * x0 * x3 * x4) + (2 * x1 * x1 * x1 * x5) +
	  (3 * x0 * x1 * x1) + (2 * x1 * x2 * x2) == -544)
	{
	  printf ("I am here at depth 5");
	  if ((1 * x0 * x0 * x1 * x1 * x2) + (-1 * x0 * x0 * x1 * x1 * x3) +
	      (-6 * x0 * x1 * x1 * x1 * x3) + (-9 * x2 * x2 * x2 * x2 * x3) +
	      (16 * x0 * x0 * x2 * x2 * x4) + (-3 * x2 * x2 * x2 * x2 * x5) +
	      (-9 * x1 * x3 * x3 * x3 * x5) + (4 * x3 * x4 * x4 * x4 * x5) +
	      (13 * x4 * x4 * x4 * x4 * x5) + (1 * x0 * x3 * x3 * x5 * x5) +
	      (-1 * x2 * x2 * x2 * x3) == 56615)
	    {
	      printf ("I am here at depth 4");
	      if ((-1 * x0 * x1 * x1 * x1 * x2) +
		  (-1 * x1 * x3 * x4 * x4 * x4) +
		  (-2 * x0 * x1 * x3 * x3 * x5) +
		  (1 * x0 * x2 * x2 * x5 * x5) +
		  (-5 * x5 * x5 * x5 * x5 * x5) + (-3 * x0 * x1 * x2 * x4) +
		  (-1 * x0 * x2 * x3) + (1 * x2) == -493)
		{
		  printf ("I am here at depth 3");
		  if ((-2 * x0 * x0 * x1 * x2 * x2) +
		      (1 * x3 * x3 * x3 * x3 * x4) +
		      (1 * x2 * x2 * x4 * x4 * x5) +
		      (1 * x1 * x2 * x2 * x5 * x5) +
		      (5 * x0 * x2 * x3 * x5 * x5) + (3 * x0 * x0 * x4 * x4) +
		      (-14 * x3 * x3 * x3 * x5) + (1 * x0 * x2 * x4) == 29277)
		    {
		      printf ("I am here at depth 2");
		      if ((-1 * x0 * x0 * x1 * x2 * x2) +
			  (1 * x0 * x0 * x1 * x1 * x3) +
			  (1 * x0 * x0 * x1 * x2 * x3) +
			  (2 * x0 * x0 * x2 * x3 * x3) +
			  (13 * x0 * x0 * x0 * x2 * x4) +
			  (1 * x1 * x2 * x2 * x3 * x4) +
			  (1 * x0 * x0 * x0 * x5 * x5) +
			  (-1 * x1 * x2 * x2 * x4) + (1 * x2 * x4 * x5 * x5) +
			  (6 * x0 * x0 * x1) == -67439)
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
