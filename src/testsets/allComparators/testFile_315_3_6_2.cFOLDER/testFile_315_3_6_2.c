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
// x0 = -1
// x1 = 2
// x2 = 6
// x3 = -8
// x4 = -7
// x5 = 10
  if ((-2 * x1 * x1) + (-2 * x1 * x4) >= 5)
    {
      printf ("I am here at depth 3");
      if ((-2 * x2) <= 55)
	{
	  printf ("I am here at depth 2");
	  if ((-12 * x2 * x5) + (-1 * x3) >= -809)
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
