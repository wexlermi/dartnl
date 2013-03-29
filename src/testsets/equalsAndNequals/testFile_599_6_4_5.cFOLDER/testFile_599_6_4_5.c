#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = 9
// x1 = -2
// x2 = -7
// x3 = 6
  if ((-1 * x0 * x0 * x0 * x1 * x3) + (-1 * x2 * x2 * x2 * x2 * x3) +
      (-1 * x0 * x0 * x3 * x3 * x3) + (3 * x0 * x2 * x3 * x3 * x3) +
      (3 * x0 * x1 * x1 * x1) + (7 * x0 * x1 * x2 * x2) +
      (-2 * x0 * x2 * x2 * x2) + (1 * x1 * x2 * x2 * x2) +
      (-2 * x0 * x1 * x1 * x3) + (-1 * x1 * x1) + (-10 * x2) + (-9 * x3) !=
      -63843)
    {
      printf ("I am here at depth 6");
      if ((-3 * x0 * x0 * x2 * x2 * x2) + (1 * x0 * x2 * x2 * x2 * x2) +
	  (2 * x1 * x1 * x1 * x1) + (1 * x0 * x1 * x2 * x2) +
	  (7 * x1 * x2 * x3 * x3) + (6 * x0 * x2 * x3) + (1 * x0 * x1) +
	  (6 * x1 * x1) + (4 * x0 * x3) + (-1 * x2) != 105690)
	{
	  printf ("I am here at depth 5");
	  if ((-2 * x2 * x2 * x2 * x2 * x2) + (-2 * x0 * x1 * x1) +
	      (-1 * x1 * x1 * x2) + (-2 * x0 * x2 * x2) == 32688)
	    {
	      printf ("I am here at depth 4");
	      if ((-1 * x1 * x1 * x1 * x1 * x1) +
		  (-1 * x0 * x0 * x0 * x1 * x3) +
		  (1 * x1 * x1 * x2 * x2 * x3) + (2 * x1 * x1 * x1 * x1) +
		  (-1 * x0 * x0 * x1 * x3) + (-54 * x0 * x1 * x1 * x3) +
		  (-5 * x0 * x2 * x2 * x3) + (136 * x1 * x1 * x3 * x3) +
		  (1 * x0 * x2 * x3 * x3) + (1 * x2 * x2) != 3465)
		{
		  printf ("I am here at depth 3");
		  if ((-27 * x0 * x0 * x0 * x1 * x1) +
		      (3 * x0 * x1 * x1 * x1 * x2) + (2 * x1 * x2 * x2 * x3) +
		      (2 * x1 * x1) != -78374)
		    {
		      printf ("I am here at depth 2");
		      if ((-2 * x1 * x1 * x1 * x1) != -70)
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
