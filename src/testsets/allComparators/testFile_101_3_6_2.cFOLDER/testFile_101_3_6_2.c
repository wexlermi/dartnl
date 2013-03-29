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
// x0 = 1
// x1 = -4
// x2 = -3
// x3 = -7
// x4 = 6
// x5 = -3
  if ((-1 * x0 * x3) != 56)
    {
      printf ("I am here at depth 3");
      if ((-1 * x0 * x2) <= 25)
	{
	  printf ("I am here at depth 2");
	  if ((-1 * x3 * x4) + (-2 * x3) + (-1 * 1) >= -9)
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
