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
// x0 = -7
// x1 = 4
// x2 = 7
// x3 = -6
// x4 = 10
// x5 = 0
  if ((-10 * x0 * x1 * x2 * x4) + (1 * x1 * x2 * x2 * x4) +
      (-25 * x1 * x4 * x4 * x4) + (-3 * x2 * x3 * x3) + (-1 * x2 * x2 * x4) !=
      -79718)
    {
      printf ("I am here at depth 4");
      if ((-5 * x1 * x3 * x3) + (2 * x3 * x3) == -648)
	{
	  printf ("I am here at depth 3");
	  if ((1146 * x0 * x1 * x2 * x2) + (-3 * x0 * x0 * x1 * x4) +
	      (-1 * x1 * x1 * x1 * x4) + (1 * x1 * x3 * x3 * x4) +
	      (-7 * x1 * x4 * x4 * x5) + (1 * x0 * x3 * x3) + (-1 * x2 * x3) +
	      (1 * x3 * x3) == -1577566)
	    {
	      printf ("I am here at depth 2");
	      if ((-6 * x2 * x2 * x3 * x5) + (-2 * x0 * x3 * x3 * x5) != 93)
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