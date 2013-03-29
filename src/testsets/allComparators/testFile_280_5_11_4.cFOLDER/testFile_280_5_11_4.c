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
//Possible solution to enter:
// x0 = -1
// x1 = 3
// x2 = 6
// x3 = -10
// x4 = -1
// x5 = 3
// x6 = -9
// x7 = -9
// x8 = 5
// x9 = -10
// x10 = -9
  if ((-1 * x1 * x1 * x1 * x2) + (-38 * x4 * x4 * x5 * x5) +
      (2 * x1 * x3 * x7 * x8) + (1 * x4 * x6 * x8 * x8) +
      (3 * x1 * x1 * x7 * x9) + (1 * x5 * x8 * x9 * x10) +
      (-1 * x8 * x8 * x8) + (-2 * x4 * x10) < 6104)
    {
      printf ("I am here at depth 5");
      if ((1 * x1 * x1 * x1 * x1) + (1 * x1 * x3 * x4 * x6) +
	  (1 * x4 * x6 * x6 * x8) + (241 * x6 * x7 * x9 * x10) +
	  (2 * x4 * x5 * x10 * x10) + (-5 * x4 * x6 * x8) +
	  (-1 * x2 * x7 * x10) > 1755037)
	{
	  printf ("I am here at depth 4");
	  if ((1 * x3 * x3 * x5 * x5) + (-1 * x1 * x2 * x4 * x6) +
	      (-14 * x1 * x3 * x5 * x6) + (4 * x4 * x4 * x7 * x7) +
	      (-34 * x1 * x2 * x7 * x8) + (2 * x4 * x4 * x9 * x9) +
	      (-1 * x7 * x7 * x9 * x9) + (1 * x1 * x3 * x5 * x10) +
	      (5 * x1 * x1 * x3) + (-1 * x9) > 9731)
	    {
	      printf ("I am here at depth 3");
	      if ((1 * x2 * x2 * x7 * x8) + (-1 * x4 * x4 * x4 * x9) +
		  (-2 * x6 * x7 * x9 * x9) + (2 * x5 * x6 * x6 * x10) +
		  (4 * x6 * x7 * x9 * x10) < 7055)
		{
		  printf ("I am here at depth 2");
		  if ((-1 * x5 * x7 * x10) == -243)
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
