#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
//Possible solution to enter:
// x0 = 4
  if ((10 * x * x) + (-1 * x) + (-2 * 1) != 68)
    {
      printf ("I am here at depth 3");
      if ((-25 * x * x) + (2 * x) + (406 * 1) != 8)
	{
	  printf ("I am here at depth 2");
	  if ((-1 * 1) != 80)
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
