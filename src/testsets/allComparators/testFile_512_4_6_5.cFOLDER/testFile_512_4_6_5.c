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
// x0 = 4
// x1 = 9
// x2 = 8
// x3 = -5
// x4 = -10
// x5 = 5
  if ((-2 * x0 * x2 * x2 * x2 * x2) + (-6 * x0 * x0 * x2 * x4 * x4) +
      (3 * x0 * x3 * x5 * x5 * x5) + (1 * x3 * x5 * x5 * x5 * x5) +
      (-1 * x5 * x5 * x5 * x5 * x5) + (-1 * x0 * x0 * x2 * x5) +
      (-1 * x2 * x3 * x5 * x5) + (-7 * x2 * x2 * x2) + (-3 * x0 * x5 * x5) +
      (-1 * x2 * x5) > -126954)
    {
      printf ("I am here at depth 4");
      if ((2 * x0 * x0 * x1 * x1 * x3) + (-1 * x2 * x2 * x3 * x4 * x4) +
	  (3 * x0 * x0 * x2 * x4 * x5) + (28 * x1 * x2 * x2 * x4 * x5) +
	  (-1 * x1 * x1 * x2 * x4) + (1 * x3 * x3 * x4 * x4) +
	  (11 * x1 * x1 * x5) + (-87 * x1 * x3) == -789210)
	{
	  printf ("I am here at depth 3");
	  if ((3 * x0 * x3 * x4 * x4 * x5) + (1 * x0 * x1 * x2 * x5 * x5) +
	      (-1 * x0 * x1 * x1 * x2) + (1 * x1 * x1 * x3 * x5) +
	      (-1 * x0 * x1 * x2) == -27705)
	    {
	      printf ("I am here at depth 2");
	      if ((1 * x0 * x0 * x2 * x4 * x4) +
		  (1 * x2 * x2 * x3 * x3 * x5) + (1 * x0 * x3 * x3 * x3) +
		  (7 * x0 * x0 * x3 * x5) + (-1 * x2 * x3 * x5 * x5) +
		  (1 * x1 * x2) == 18572)
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
