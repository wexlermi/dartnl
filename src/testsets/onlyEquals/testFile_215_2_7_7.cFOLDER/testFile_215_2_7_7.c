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
//Possible solution to enter:
// x0 = 5
// x1 = 4
// x2 = -4
// x3 = 8
// x4 = -10
// x5 = 6
// x6 = -10
  if ((1 * x0 * x1 * x1 * x2 * x2 * x2 * x2) +
      (-1 * x1 * x1 * x1 * x3 * x3 * x3 * x3) +
      (-1 * x0 * x0 * x1 * x1 * x1 * x2 * x5) +
      (2 * x0 * x0 * x0 * x1 * x2 * x2 * x6) +
      (4 * x1 * x3 * x3 * x4 * x4 * x4 * x6) +
      (-1 * x2 * x2 * x2 * x2 * x5 * x6 * x6) +
      (5 * x0 * x1 * x1 * x2 * x2 * x2) + (-2 * x0 * x1 * x1 * x1 * x4 * x4) +
      (-1 * x0 * x3 * x4 * x4 * x4 * x4) +
      (-1 * x1 * x5 * x5 * x6 * x6 * x6) + (-4 * x1 * x1 * x1 * x4 * x5) ==
      9392896)
    {
      printf ("I am here at depth 2");
      if ((9 * x0 * x1 * x2 * x3 * x4 * x4 * x4) +
	  (1 * x0 * x2 * x3 * x3 * x4 * x4 * x4) +
	  (1 * x1 * x2 * x3 * x3 * x3 * x5 * x5) +
	  (79 * x0 * x1 * x4 * x5 * x5 * x5 * x5) +
	  (7 * x4 * x4 * x4 * x4 * x4 * x4 * x6) +
	  (1 * x3 * x3 * x3 * x5 * x5 * x5 * x6) +
	  (2 * x0 * x2 * x2 * x5 * x6 * x6) + (-1 * x2 * x2 * x2 * x3 * x3) +
	  (-1 * x2 * x2 * x4 * x4 * x6) + (-1 * x2 * x2 * x3 * x5) ==
	  -84722304)
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
