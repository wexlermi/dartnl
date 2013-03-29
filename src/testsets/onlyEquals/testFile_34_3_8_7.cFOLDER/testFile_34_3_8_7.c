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
//Possible solution to enter:
// x0 = 8
// x1 = -2
// x2 = -1
// x3 = 8
// x4 = -10
// x5 = 5
// x6 = 8
// x7 = -5
  if ((2 * x2 * x2 * x4 * x4 * x4 * x4 * x6) == 160000)
    {
      printf ("I am here at depth 3");
      if ((2 * x1 * x1 * x3 * x3 * x3 * x5 * x5) +
	  (2 * x2 * x2 * x3 * x3 * x3 * x3 * x6) +
	  (1 * x0 * x2 * x2 * x4 * x4 * x4 * x6) +
	  (4 * x1 * x3 * x4 * x4 * x5 * x5 * x7) +
	  (-1 * x1 * x3 * x3 * x3 * x6 * x6 * x7) +
	  (4 * x0 * x0 * x2 * x5 * x6 * x6 * x7) +
	  (2 * x0 * x0 * x3 * x3 * x3 * x5) +
	  (-1 * x1 * x2 * x2 * x2 * x4 * x6) +
	  (-1 * x2 * x2 * x2 * x3 * x5 * x7) +
	  (3 * x1 * x5 * x6 * x6 * x6 * x7) +
	  (-1 * x5 * x5 * x5 * x5 * x7 * x7) + (1 * x3 * x3 * x3 * x3 * x3) +
	  (-2 * x1 * x2 * x2 * x5 * x5) + (-10 * x2 * x4) == 1407439)
	{
	  printf ("I am here at depth 2");
	  if ((16 * x0 * x0 * x1 * x4 * x4 * x5 * x5) +
	      (-2 * x2 * x2 * x3 * x3 * x3 * x5 * x6) +
	      (-1 * x0 * x0 * x0 * x1 * x2 * x6 * x6) +
	      (4 * x0 * x0 * x2 * x6 * x6 * x6 * x6) +
	      (12 * x1 * x2 * x4 * x6 * x6 * x6 * x6) +
	      (1 * x2 * x2 * x5 * x5 * x5 * x5 * x7) +
	      (2 * x0 * x2 * x4 * x4 * x6 * x6 * x7) +
	      (24 * x2 * x2 * x2 * x2 * x2 * x7 * x7) +
	      (3 * x0 * x1 * x1 * x3 * x5 * x7 * x7) +
	      (9 * x2 * x4 * x4 * x4 * x5 * x7 * x7) +
	      (2 * x2 * x5 * x5 * x5 * x5 * x7 * x7) +
	      (1 * x4 * x4 * x4 * x5 * x6 * x7 * x7) +
	      (-1 * x1 * x2 * x5 * x6 * x6 * x7 * x7) +
	      (-1 * x0 * x5 * x5 * x6 * x7 * x7 * x7) +
	      (-1 * x2 * x2 * x2 * x4 * x4 * x4) +
	      (8 * x2 * x3 * x3 * x4 * x5 * x5) +
	      (-1 * x0 * x1 * x4 * x5 * x5 * x6) +
	      (1 * x0 * x3 * x3 * x3 * x5 * x7) +
	      (1 * x0 * x1 * x2 * x4 * x4) + (-1 * x1 * x2 * x2 * x2 * x6) +
	      (-1 * x3 * x6 * x7 * x7 * x7) + (1 * x0 * x2 * x4 * x6) +
	      (-3 * x1 * x1 * x4) == -6373143)
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
