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
// x0 = 3
// x1 = -2
// x2 = 5
// x3 = 7
// x4 = -7
// x5 = -2
  if ((-1 * x5) > -51)
    {
      printf ("I am here at depth 5");
      if ((1 * x3) >= -39)
	{
	  printf ("I am here at depth 4");
	  if ((-8 * x4) != 84)
	    {
	      printf ("I am here at depth 3");
	      if ((-1 * x4) >= -36)
		{
		  printf ("I am here at depth 2");
		  if ((-2 * x4) != 108)
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
