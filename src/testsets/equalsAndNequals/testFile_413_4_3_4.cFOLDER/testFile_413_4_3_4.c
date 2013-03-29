#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = 4
// x1 = -8
// x2 = 10
  if ((-2 * x0 * x1 * x1 * x1) + (1 * x2 * x2 * x2 * x2) +
      (-1 * x0 * x1 * x2) + (1 * x0 * x2 * x2) + (-23 * x1 * x2 * x2) +
      (-2 * x0 * x1) + (-1 * x1 * x1) + (15 * x2 * x2) + (-2 * 1) != 34660)
    {
      printf ("I am here at depth 4");
      if ((-1 * x1 * x1 * x1 * x1) + (-1 * x2 * x2 * x2 * x2) == -14096)
	{
	  printf ("I am here at depth 3");
	  if ((-14 * x0 * x0 * x2 * x2) + (-8 * x0 * x2 * x2 * x2) +
	      (1 * x0 * x1 * x1) + (-27 * x0 * x1 * x2) +
	      (-1 * x1 * x1 * x2) + (-1 * x1 * x2 * x2) + (1 * x0 * x1) +
	      (-1 * x1) != -45338)
	    {
	      printf ("I am here at depth 2");
	      if ((-1 * x0 * x1 * x1 * x2) + (1 * x1 * x1 * x1 * x2) +
		  (-1 * x1 * x1 * x2 * x2) + (-4 * x1 * x2 * x2 * x2) +
		  (5 * x1 * x1 * x1) + (-1 * x0 * x0 * x2) + (3 * x1 * x1) +
		  (2 * x2) != 15470)
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
