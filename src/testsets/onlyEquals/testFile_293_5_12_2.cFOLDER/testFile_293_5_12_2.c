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
  int x10;
  int x11;
//Possible solution to enter:
// x0 = -3
// x1 = -2
// x2 = -4
// x3 = -4
// x4 = 3
// x5 = -9
// x6 = 1
// x7 = -3
// x8 = 0
// x9 = 0
// x10 = -5
// x11 = 2
  if ((1 * x0 * x2) + (-1 * x3 * x5) + (-2 * x4 * x10) == 6)
    {
      printf ("I am here at depth 5");
      if ((-1 * x7 * x8) + (-5 * x5 * x9) + (2 * x2 * x11) == -16)
	{
	  printf ("I am here at depth 4");
	  if ((1 * x2 * x5) == 36)
	    {
	      printf ("I am here at depth 3");
	      if ((14 * x4 * x9) == 0)
		{
		  printf ("I am here at depth 2");
		  if ((1 * x5 * x8) == 0)
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
