#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = -2
// x1 = 3
  if ((2 * x0 * x0 * x0 * x0 * x0 * x1) + (-1 * x0 * x0 * x1 * x1 * x1 * x1) +
      (-2 * x0 * x0 * x1 * x1 * x1) + (-1 * x0 * x0 * x0 * x0) +
      (3 * x0 * x1 * x1) + (-7 * x1 * x1) <= -767)
    {
      printf ("I am here at depth 5");
      if ((1 * x0 * x0 * x0 * x0 * x1 * x1) +
	  (2 * x0 * x1 * x1 * x1 * x1 * x1) + (2 * x0 * x0 * x0 * x0 * x0) +
	  (5 * x0 * x0 * x0 * x1 * x1) + (-1 * x0 * x0 * x1 * x1 * x1) +
	  (1 * x0 * x1 * x1 * x1 * x1) + (4 * x0 * x0 * x0 * x0) +
	  (-1 * x0 * x0 * x0 * x1) + (1 * x0 * x1 * x1 * x1) +
	  (1 * x1 * x1 * x1 * x1) + (2 * x0 * x0 * x1) + (11 * x0 * x0) +
	  (-4 * x0 * x1) + (1 * x1) + (1 * 1) < -1288)
	{
	  printf ("I am here at depth 4");
	  if ((-2 * x0 * x0 * x0 * x0 * x1 * x1) +
	      (3 * x0 * x0 * x1 * x1 * x1 * x1) +
	      (5 * x0 * x0 * x1 * x1 * x1) + (-1 * x0 * x1 * x1 * x1) +
	      (-224 * x0 * x0 * x1) + (4 * x1 * x1 * x1) + (2 * x0 * x0) +
	      (1 * x0) + (1 * x1) > -1367)
	    {
	      printf ("I am here at depth 3");
	      if ((1 * x1 * x1 * x1 * x1 * x1 * x1) + (-1 * x0 * x0 * x1) +
		  (1 * x0 * x1 * x1) + (-1 * x1 * x1 * x1) + (6 * 1) >= 580)
		{
		  printf ("I am here at depth 2");
		  if ((-2 * x0 * x0 * x1) + (3 * 1) >= -70)
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
