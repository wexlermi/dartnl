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
// x0 = 5
// x1 = 7
// x2 = -8
// x3 = -6
// x4 = -6
// x5 = -5
  if ((1 * x3) == -6)
    {
      printf ("I am here at depth 5");
      if ((-1 * x5) != -86)
	{
	  printf ("I am here at depth 4");
	  if ((10 * x3) == -60)
	    {
	      printf ("I am here at depth 3");
	      if ((-6 * x5) == 30)
		{
		  printf ("I am here at depth 2");
		  if ((-1 * x3) == 6)
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