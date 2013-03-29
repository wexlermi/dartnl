#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = -9
// x1 = -7
  if ((6 * x0 * x0 * x0 * x0 * x1 * x1) + (-1 * x0 * x0 * x1 * x1 * x1 * x1) +
      (-1 * x0 * x1 * x1 * x1 * x1 * x1) +
      (-1 * x1 * x1 * x1 * x1 * x1 * x1) + (1 * x0 * x0 * x0 * x0 * x0) +
      (-1 * x0 * x0 * x0 * x0 * x1) + (-3 * x0 * x0 * x0 * x1 * x1) +
      (-1 * x0 * x1 * x1 * x1 * x1) + (1 * x1 * x1 * x1 * x1 * x1) +
      (-2 * x0 * x0 * x1) + (1 * x0 * x1 * x1) + (5 * x1 * x1 * x1) +
      (-3 * x0 * x0) + (-1 * x0) + (-2 * 1) == 1563126)
    {
      printf ("I am here at depth 4");
      if ((2 * x0 * x0 * x0 * x0 * x1 * x1) +
	  (-1 * x0 * x0 * x0 * x1 * x1 * x1) +
	  (1 * x0 * x0 * x1 * x1 * x1 * x1) +
	  (-51 * x0 * x1 * x1 * x1 * x1 * x1) +
	  (1 * x1 * x1 * x1 * x1 * x1 * x1) + (-6 * x0 * x0 * x0 * x0 * x0) +
	  (-1 * x0 * x0 * x1 * x1 * x1) + (56 * x0 * x0 * x1 * x1) +
	  (-4 * x0 * x1 * x1 * x1) + (1 * x1 * x1 * x1 * x1) +
	  (-1 * x0 * x0 * x0) + (2 * x0 * x0 * x1) + (-1 * x1 * x1 * x1) +
	  (3 * x0 * x0) + (-2 * x0) + (1 * 1) == -6414758)
	{
	  printf ("I am here at depth 3");
	  if ((-1 * x0 * x0 * x0 * x0 * x1 * x1) +
	      (28 * x0 * x0 * x1 * x1 * x1) + (-3 * x0 * x0 * x0 * x1) +
	      (11 * x1 * x1 * x1 * x1) == -1088311)
	    {
	      printf ("I am here at depth 2");
	      if ((-1 * x0 * x1 * x1 * x1 * x1 * x1) +
		  (-2 * x0 * x0 * x0 * x0 * x0) +
		  (5 * x0 * x0 * x0 * x0 * x1) +
		  (-3 * x0 * x1 * x1 * x1 * x1) +
		  (1 * x1 * x1 * x1 * x1 * x1) + (1 * x0 * x0 * x0 * x0) +
		  (-1 * x0 * x0 * x0 * x1) + (-13 * x0 * x0 * x0) +
		  (5 * x0 * x1 * x1) + (36 * x1 * x1 * x1) + (1 * x0 * x0) +
		  (1 * x1) + (1 * 1) == -218323)
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
