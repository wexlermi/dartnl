#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = -3
// x1 = 4
  if ((1 * x0 * x0 * x0 * x0 * x0) + (-1 * x0 * x1 * x1 * x1 * x1) +
      (-2 * x1 * x1 * x1 * x1 * x1) + (-1 * x0 * x0 * x0 * x0) +
      (-7 * x0 * x0 * x0 * x1) + (1 * x0 * x0 * x1 * x1) +
      (1 * x0 * x1 * x1 * x1) + (-1 * x1 * x1 * x1 * x1) +
      (-1 * x0 * x0 * x0) + (-4 * x0 * x0) + (-1 * x1 * x1) + (-1 * x0) ==
      -1174)
    {
      printf ("I am here at depth 4");
      if ((1 * x0 * x0 * x0 * x0) + (9 * x0 * x0 * x1 * x1) +
	  (1 * x0 * x1 * x1 * x1) + (2 * x1 * x1) + (-2 * 1) == 1215)
	{
	  printf ("I am here at depth 3");
	  if ((-1 * x0 * x0 * x0) == 27)
	    {
	      printf ("I am here at depth 2");
	      if ((-1 * x0 * x0 * x0 * x0 * x0) +
		  (1 * x1 * x1 * x1 * x1 * x1) + (-2 * x0 * x0 * x0 * x0) +
		  (-1 * x0 * x0 * x1 * x1) + (-8 * x1 * x1 * x1 * x1) +
		  (-5 * x0) + (-13 * x1) + (6 * 1) == -1118)
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
