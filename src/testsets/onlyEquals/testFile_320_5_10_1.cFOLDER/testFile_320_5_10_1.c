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
  int x6;
  int x7;
  int x8;
  int x9;
//Possible solution to enter:
// x0 = 4
// x1 = -10
// x2 = -2
// x3 = 0
// x4 = -1
// x5 = -5
// x6 = 4
// x7 = -5
// x8 = 0
// x9 = 8
  if ((-2 * 1) == -2)
    {
      printf ("I am here at depth 5");
      if ((1 * x4) == -1)
	{
	  printf ("I am here at depth 4");
	  if ((3 * x8) == 0)
	    {
	      printf ("I am here at depth 3");
	      if ((-1 * x4) == 1)
		{
		  printf ("I am here at depth 2");
		  if ((-2 * x9) == -16)
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
