#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
//Possible solution to enter:
// x0 = 1
  if ((-1 * x) == -1)
    {
      printf ("I am here at depth 3");
      if ((-9 * x) == -9)
	{
	  printf ("I am here at depth 2");
	  if ((22 * x) == 22)
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
