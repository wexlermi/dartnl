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
// x0 = -4
// x1 = -6
// x2 = -9
// x3 = 6
// x4 = 8
// x5 = -8
  if ((-4 * x2) != 33)
    {
      printf ("I am here at depth 3");
      if ((3 * x2) == -27)
	{
	  printf ("I am here at depth 2");
	  if ((-1 * 1) == -1)
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
