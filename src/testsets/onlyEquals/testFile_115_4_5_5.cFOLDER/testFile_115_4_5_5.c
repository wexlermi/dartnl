#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
  int x4;
//Possible solution to enter:
// x0 = 9
// x1 = 8
// x2 = -5
// x3 = 6
// x4 = 10
  if ((1 * x2 * x2 * x2 * x2 * x2) + (1 * x0 * x1 * x1 * x1 * x4) +
      (-3 * x0 * x0 * x1 * x2) + (13 * x0 * x1 * x2 * x3) +
      (14 * x0 * x2 * x3 * x4) + (1 * x1 * x2) == -13245)
    {
      printf ("I am here at depth 4");
      if ((-1 * x0 * x0 * x1 * x1 * x1) + (-1 * x1 * x1 * x1 * x1 * x1) +
	  (-6 * x0 * x0 * x2 * x2 * x2) + (-3 * x1 * x1 * x2 * x2 * x2) +
	  (1 * x1 * x1 * x2 * x2 * x3) + (-1 * x2 * x2 * x2 * x3 * x3) +
	  (16 * x1 * x1 * x2 * x2 * x4) + (-1 * x0 * x1 * x2 * x3 * x4) +
	  (1 * x0 * x1 * x1 * x2) + (-3 * x1 * x1 * x4 * x4) +
	  (1 * x0 * x4) == 280220)
	{
	  printf ("I am here at depth 3");
	  if ((1 * x1 * x1 * x1 * x2 * x2) + (21 * x2 * x2 * x2 * x2 * x3) +
	      (3 * x1 * x2 * x2 * x2 * x4) + (-5 * x0 * x1 * x2 * x3 * x4) +
	      (2 * x2 * x2 * x2 * x3 * x4) + (1 * x3 * x4 * x4 * x4 * x4) +
	      (-1 * x0 * x0 * x0 * x2) + (-1 * x0 * x1 * x2) +
	      (-1 * x3 * x4 * x4) + (-2 * x4) == 217935)
	    {
	      printf ("I am here at depth 2");
	      if ((-1 * x0 * x0 * x1 * x1 * x2) +
		  (1 * x2 * x2 * x3 * x3 * x4) + (22 * x0 * x0 * x4) == 52740)
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
