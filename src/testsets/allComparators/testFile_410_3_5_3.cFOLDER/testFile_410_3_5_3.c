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
// x0 = -8
// x1 = 9
// x2 = -5
// x3 = -3
// x4 = -1
  if ((-2 * x0 * x0 * x3) + (-2 * x2 * x2 * x4) + (1 * x0 * x0) +
      (1 * x2 * x3) != 553)
    {
      printf ("I am here at depth 3");
      if ((1 * x1 * x1 * x2) + (-1 * x0 * x0) + (2 * x4) == -471)
	{
	  printf ("I am here at depth 2");
	  if ((-1 * x0 * x3 * x3) + (-1 * x1 * x3 * x3) +
	      (-1 * x0 * x0 * x4) + (-9 * x1 * x2 * x4) + (1 * x3 * x4) +
	      (-1 * 1) == -348)
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