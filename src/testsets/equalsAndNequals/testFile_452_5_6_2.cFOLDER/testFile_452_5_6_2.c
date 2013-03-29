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
// x1 = 1
// x2 = 1
// x3 = -2
// x4 = 8
// x5 = 7
  if ((1 * x1 * x4) + (1 * x4) + (7 * 1) != -54)
    {
      printf ("I am here at depth 5");
      if ((-1 * x1 * x4) + (2 * x0) == -10)
	{
	  printf ("I am here at depth 4");
	  if ((1 * x0 * x4) + (-1 * x0) + (1 * x2) != -67)
	    {
	      printf ("I am here at depth 3");
	      if ((6 * x1 * x2) + (1 * x0) + (2 * 1) != -27)
		{
		  printf ("I am here at depth 2");
		  if ((1 * 1) == 1)
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
  else
    {
      printf ("I am at the else of depth 5");
    }
}
