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
// x1 = -6
// x2 = 10
// x3 = -6
// x4 = 9
// x5 = 1
// x6 = -1
// x7 = 3
// x8 = 5
// x9 = -4
// x10 = 9
  if ((2 * x1 * x2 * x2 * x6) + (1 * x0 * x2 * x2 * x7) +
      (5 * x2 * x4 * x7 * x7) + (1 * x1 * x1 * x7 * x8) +
      (-1 * x1 * x5 * x9 * x9) + (-1 * x2 * x3 * x6 * x10) +
      (1 * x0 * x2 * x8 * x10) + (2 * x3 * x8 * x8) + (60 * x7 * x9 * x9) <
      7181)
    {
      printf ("I am here at depth 4");
      if ((-1 * x1 * x2 * x4 * x4) + (-4 * x7 * x8 * x8) != 4657)
	{
	  printf ("I am here at depth 3");
	  if ((3 * x5 * x7 * x8) < 65)
	    {
	      printf ("I am here at depth 2");
	      if ((1 * x1 * x2 * x8 * x8) + (1 * x1 * x2 * x6 * x9) +
		  (-1 * x0 * x5 * x7 * x9) + (-1 * x0 * x5 * x8 * x9) +
		  (-1 * x5 * x5 * x7) + (-1 * x0 * x0 * x8) +
		  (1 * x4 * x5 * x10) == -1699)
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
