#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = -4
// x1 = 2
// x2 = 7
  if ((-27 * x0 * x0 * x0 * x2 * x2) + (-1 * x0 * x0 * x2 * x2 * x2) +
      (-1 * x0 * x0 * x1 * x2) + (-1 * x1 * x1 * x1) + (-1 * 1) > 78884)
    {
      printf ("I am here at depth 3");
      if ((-2 * x0 * x1 * x2 * x2 * x2) + (1 * x0 * x2 * x2 * x2 * x2) +
	  (1 * x1 * x1 * x1 * x1) + (6 * x1) >= -4163)
	{
	  printf ("I am here at depth 2");
	  if ((-4 * x0 * x0 * x0 * x1 * x1) + (-8 * x1 * x1 * x1 * x1 * x1) +
	      (17 * x0 * x0 * x0 * x2) + (1 * x0 * x2 * x2 * x2) +
	      (-2 * x1 * x1 * x1) + (1 * x0 * x0 * x2) + (2 * x1 * x2 * x2) +
	      (768 * x2 * x2 * x2) < 255504)
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
