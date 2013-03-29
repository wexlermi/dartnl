#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
//Possible solution to enter:
// x0 = 3
  if ((1 * x) != 83)
    {
      printf ("I am here at depth 3");
      if ((2 * x) < 91)
	{
	  printf ("I am here at depth 2");
	  if ((1 * x) > -14)
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
