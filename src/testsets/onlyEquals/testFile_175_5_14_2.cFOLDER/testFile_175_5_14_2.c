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
  int x12;
  int x13;
//Possible solution to enter:
// x0 = -4
// x1 = 4
// x2 = 0
// x3 = 4
// x4 = 4
// x5 = -2
// x6 = 3
// x7 = 1
// x8 = -4
// x9 = 0
// x10 = -3
// x11 = 0
// x12 = -9
// x13 = -8
  if ((-4 * x0 * x6) == 48)
    {
      printf ("I am here at depth 5");
      if ((-1 * x1 * x7) + (-1 * x2 * x13) == -4)
	{
	  printf ("I am here at depth 4");
	  if ((-2 * x6 * x11) + (-54 * x7 * x13) == 432)
	    {
	      printf ("I am here at depth 3");
	      if ((-15 * x3 * x7) + (-1 * x7 * x12) + (3 * x11 * x12) == -51)
		{
		  printf ("I am here at depth 2");
		  if ((-4 * x0 * x2) + (-12 * x1 * x2) + (1 * x7 * x12) == -9)
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
