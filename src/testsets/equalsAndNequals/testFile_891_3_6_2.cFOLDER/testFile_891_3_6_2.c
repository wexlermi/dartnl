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
// x0 = 2
// x1 = -6
// x2 = 8
// x3 = 4
// x4 = -8
// x5 = 3
  if ((1 * x4 * x4) != 58)
    {
      printf ("I am here at depth 3");
      if ((6 * x0 * x4) != -78)
	{
	  printf ("I am here at depth 2");
	  if ((20 * x1 * x4) == 960)
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