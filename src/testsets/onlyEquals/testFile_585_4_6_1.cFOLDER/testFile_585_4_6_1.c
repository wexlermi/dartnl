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
// x0 = 7
// x1 = 5
// x2 = -2
// x3 = -8
// x4 = 0
// x5 = 8
  if ((2 * x1) == 10)
    {
      printf ("I am here at depth 4");
      if ((-2 * 1) == -2)
	{
	  printf ("I am here at depth 3");
	  if ((-1 * x3) == 8)
	    {
	      printf ("I am here at depth 2");
	      if ((1 * x2) == -2)
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
