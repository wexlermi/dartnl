#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
  int x4;
//Possible solution to enter:
// x0 = 6
// x1 = -8
// x2 = 3
// x3 = -5
// x4 = 7
  if ((-1 * x0 * x0 * x0 * x0 * x3) + (9 * x0 * x0 * x0 * x2 * x3) +
      (1 * x1 * x2 * x3 * x3 * x3) + (-1 * x2 * x2 * x3 * x3 * x3) +
      (2 * x0 * x2 * x2 * x3 * x4) + (-1 * x1 * x1 * x1 * x2) +
      (-1 * x3 * x3 * x3 * x3) == -21424)
    {
      printf ("I am here at depth 3");
      if ((-1 * x0 * x0 * x2 * x2 * x3) + (-1 * x0 * x0 * x0 * x3 * x4) +
	  (1 * x0 * x1 * x3 * x4 * x4) + (2 * x2 * x2 * x3 * x4 * x4) +
	  (-6 * x0 * x3 * x3 * x4 * x4) + (1 * x2 * x2 * x3 * x3) +
	  (2 * x0 * x0 * x1 * x4) + (-1 * x1 * x3 * x3 * x4) +
	  (1 * x0 * x2 * x3) + (-2 * x1 * x2 * x3) + (1 * x2) == -30304)
	{
	  printf ("I am here at depth 2");
	  if ((-3 * x1 * x1 * x1 * x1 * x2) + (6 * x0 * x0 * x0 * x2 * x3) +
	      (-2 * x1 * x1 * x2 * x4 * x4) + (-8 * x2 * x2 * x4 * x4 * x4) +
	      (4 * x1 * x1 * x1 * x2) + (7 * x2 * x2 * x2 * x3) +
	      (-4 * x2 * x2 * x4 * x4) + (-4 * x0 * x0 * x4) +
	      (-2 * x0 * x4 * x4) + (-1 * 1) == -110266)
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
