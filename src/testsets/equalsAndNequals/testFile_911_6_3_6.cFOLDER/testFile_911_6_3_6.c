#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = 8
// x1 = -3
// x2 = 1
  if ((-3 * x0 * x1 * x1 * x2 * x2 * x2) + (-1 * x0 * x0 * x1 * x1 * x2) +
      (15 * x1 * x1 * x1 * x1 * x2) + (-4 * x1 * x1 * x1 * x2 * x2) +
      (-1 * x0 * x0 * x0 * x1) + (3 * x0 * x0 * x0) == 3603)
    {
      printf ("I am here at depth 6");
      if ((-1 * x0 * x0 * x0 * x1 * x1 * x2) +
	  (2 * x0 * x0 * x1 * x1 * x1 * x2) +
	  (-1 * x0 * x1 * x1 * x1 * x1 * x2) +
	  (5 * x0 * x0 * x1 * x2 * x2 * x2) +
	  (1 * x0 * x2 * x2 * x2 * x2 * x2) + (-1 * x0 * x0 * x1 * x1 * x1) +
	  (3 * x1 * x1 * x1 * x1 * x1) + (2 * x1 * x1 * x1 * x1 * x2) +
	  (1 * x0 * x1 * x2 * x2 * x2) + (3 * x1 * x1 * x2 * x2 * x2) +
	  (-1 * x1 * x1 * x1 * x1) + (5 * x0 * x0 * x0) +
	  (-1 * x1 * x1 * x1) + (-1 * x0 * x0) != -6033)
	{
	  printf ("I am here at depth 5");
	  if ((1 * x0 * x1 * x2 * x2 * x2 * x2) +
	      (-3 * x0 * x1 * x1 * x1 * x2) + (1 * x1 * x1 * x1 * x2) +
	      (1 * x0 * x1 * x2 * x2) + (-2 * x0 * x2 * x2 * x2) +
	      (-3 * x0 * x1 * x2) + (4 * x2 * x2 * x2) == 633)
	    {
	      printf ("I am here at depth 4");
	      if ((1 * x0 * x1 * x1 * x1 * x1 * x1) +
		  (1 * x0 * x0 * x2 * x2 * x2) + (-4 * x0 * x1 * x2) == -1784)
		{
		  printf ("I am here at depth 3");
		  if ((-1 * x0 * x0 * x0 * x0 * x0 * x2) +
		      (1 * x1 * x1 * x1 * x1 * x1 * x2) +
		      (1 * x0 * x0 * x0 * x2 * x2 * x2) +
		      (-29 * x0 * x0 * x1 * x2 * x2 * x2) +
		      (1 * x0 * x0 * x2 * x2 * x2 * x2) +
		      (1 * x1 * x1 * x2 * x2 * x2 * x2) +
		      (1 * x0 * x0 * x1 * x1 * x2) +
		      (-1 * x0 * x1 * x1 * x1 * x2) +
		      (-1 * x0 * x0 * x2 * x2 * x2) + (2 * x0 * x1 * x2) +
		      (-1 * x0 * x2) + (3 * x2 * x2) + (-2 * x0) != -26254)
		    {
		      printf ("I am here at depth 2");
		      if ((18 * x0 * x1 * x1 * x2 * x2) +
			  (-1 * x1 * x1 * x1 * x1) +
			  (1 * x1 * x1 * x2 * x2) != 1178)
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