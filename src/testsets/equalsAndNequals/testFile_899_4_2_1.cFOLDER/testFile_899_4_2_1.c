#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = 2
// x1 = 1
  if ((4 * 1) != -84)
    {
      printf ("I am here at depth 4");
      if ((-2 * 1) == -2)
	{
	  printf ("I am here at depth 3");
	  if ((-1 * 1) != 85)
	    {
	      printf ("I am here at depth 2");
	      if ((7 * 1) == 7)
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
  else
    {
      printf ("I am at the else of depth 4");
    }
}