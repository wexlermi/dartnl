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
// x0 = -4
// x1 = 1
// x2 = -2
// x3 = 2
// x4 = -10
// x5 = -1
  if ((3 * x0 * x0 * x0 * x0 * x0 * x1 * x2 * x5) +
      (3 * x0 * x0 * x1 * x2 * x2 * x2 * x4 * x5) +
      (-14 * x0 * x1 * x1 * x2 * x2 * x3 * x3) == -9088)
    {
      printf ("I am here at depth 4");
      if ((1 * x0 * x2 * x3 * x3 * x3 * x3 * x3 * x3) +
	  (-1 * x0 * x1 * x1 * x2 * x2 * x4 * x4 * x5) +
	  (-1 * x0 * x2 * x2 * x3 * x3 * x4 * x4 * x5) +
	  (-5 * x0 * x1 * x1 * x1 * x1 * x1 * x5 * x5) +
	  (-44 * x1 * x1 * x1 * x1 * x2 * x4 * x5 * x5) +
	  (-12 * x0 * x1 * x1 * x2 * x3 * x4 * x5 * x5) +
	  (11 * x2 * x4 * x4 * x4 * x5 * x5 * x5 * x5) +
	  (-165 * x0 * x5 * x5 * x5 * x5 * x5 * x5 * x5) +
	  (4 * x0 * x0 * x0 * x1 * x1 * x4 * x4) +
	  (-2 * x0 * x1 * x4 * x4 * x4 * x4 * x4) +
	  (-1 * x0 * x0 * x0 * x0 * x1 * x5 * x5) +
	  (1 * x2 * x3 * x4 * x4 * x4 * x5 * x5) +
	  (1 * x1 * x2 * x2 * x2 * x2 * x3) + (10 * x1 * x3 * x5 * x5 * x5) ==
	  -806932)
	{
	  printf ("I am here at depth 3");
	  if ((1 * x0 * x0 * x0 * x0 * x1 * x1 * x3 * x4) +
	      (-1 * x0 * x1 * x1 * x2 * x2 * x3 * x4 * x4) +
	      (-2 * x0 * x0 * x0 * x0 * x2 * x3 * x3 * x5) +
	      (4 * x1 * x1 * x1 * x1 * x1 * x1 * x4 * x5) +
	      (1 * x2 * x3 * x3 * x4 * x4 * x4 * x4 * x5) +
	      (-3 * x1 * x3 * x3 * x4 * x4 * x5 * x5 * x5) +
	      (-4 * x0 * x0 * x0 * x1 * x1 * x2 * x2) +
	      (-1 * x1 * x3 * x4 * x4 * x4 * x4) +
	      (-6 * x1 * x1 * x3 * x3 * x5 * x5) +
	      (-2 * x2 * x2 * x4 * x5 * x5 * x5) + (6 * x5 * x5 * x5 * x5) ==
	      56150)
	    {
	      printf ("I am here at depth 2");
	      if ((-1 * x0 * x0 * x2 * x2 * x3 * x3 * x3 * x3) +
		  (-1 * x2 * x2 * x2 * x2 * x4 * x4 * x4 * x4) +
		  (13 * x1 * x1 * x2 * x2 * x2 * x2 * x2 * x5) +
		  (1 * x1 * x1 * x1 * x3 * x3 * x5 * x5 * x5) +
		  (-1 * x0 * x0 * x0 * x2 * x2 * x3 * x4) +
		  (1 * x0 * x0 * x0 * x0 * x1 * x3 * x5) +
		  (1 * x0 * x2 * x2 * x2 * x2 * x4 * x5) +
		  (13 * x0 * x0 * x1 * x2 * x4 * x4 * x5) +
		  (-3 * x0 * x3 * x4 * x4 * x4 * x4) +
		  (1 * x1 * x1 * x4 * x5 * x5) == 114706)
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
