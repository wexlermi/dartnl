#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = -7
// x1 = 4
  if ((1 * x0 * x0) == 49)
    {
      printf ("I am here at depth 3");
      if ((1 * x1 * x1 * x1) + (1 * x1 * x1) + (-20 * x1) == 0)
	{
	  printf ("I am here at depth 2");
	  if ((5 * x0 * x0 * x1) + (-1 * x0 * x0) + (1 * x0) == 924)
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