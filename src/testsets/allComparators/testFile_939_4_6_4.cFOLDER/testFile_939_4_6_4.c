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
// x0 = 1
// x1 = 5
// x2 = 3
// x3 = 10
// x4 = 4
// x5 = -10
  if ((-1 * x0 * x0 * x0 * x3) + (2 * x0 * x2 * x3) + (-7 * x2 * x5 * x5) ==
      -2050)
    {
      printf ("I am here at depth 4");
      if ((-1 * x1 * x3 * x3 * x3) + (-6 * x2 * x2 * x2 * x4) +
	  (4 * x0 * x3 * x5 * x5) + (1 * x1 * x5 * x5) <= -1077)
	{
	  printf ("I am here at depth 3");
	  if ((4 * x1 * x1 * x1 * x2) + (-79 * x0 * x0 * x3 * x3) +
	      (-4 * x0 * x1 * x2 * x4) + (-1 * x0 * x1 * x1) +
	      (-1 * x4 * x5 * x5) > -7146)
	    {
	      printf ("I am here at depth 2");
	      if ((-1 * x1 * x1 * x2 * x3) + (-1 * x2 * x2 * x3 * x3) +
		  (5 * x5 * x5) < -1055)
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