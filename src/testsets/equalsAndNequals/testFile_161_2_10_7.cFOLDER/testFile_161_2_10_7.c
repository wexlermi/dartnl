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
//Possible solution to enter:
// x0 = 10
// x1 = 5
// x2 = 6
// x3 = -6
// x4 = 6
// x5 = 6
// x6 = 1
// x7 = 0
// x8 = 10
// x9 = 0
  if ((1 * x0 * x2 * x2 * x2 * x3 * x4 * x5) +
      (-2 * x0 * x2 * x2 * x2 * x4 * x5 * x6) +
      (-1 * x0 * x1 * x1 * x1 * x1 * x6 * x7) +
      (-1 * x0 * x0 * x0 * x7 * x7 * x7 * x7) +
      (-19 * x2 * x5 * x5 * x7 * x7 * x7 * x7) +
      (-1 * x4 * x4 * x5 * x5 * x6 * x8 * x8) +
      (4 * x0 * x3 * x3 * x6 * x6 * x6 * x9) +
      (1 * x1 * x1 * x1 * x2 * x4 * x7 * x9) +
      (-5 * x4 * x4 * x7 * x7 * x7 * x9 * x9) +
      (-2 * x1 * x1 * x1 * x4 * x5 * x6) +
      (-40 * x3 * x6 * x6 * x6 * x6 * x7) +
      (-2 * x0 * x0 * x1 * x1 * x2 * x8) + (1 * x0 * x0 * x5 * x6 * x7 * x8) +
      (-2 * x4 * x4 * x5 * x7 * x7 * x9) +
      (31 * x5 * x5 * x7 * x8 * x8 * x9) + (1 * x0 * x2 * x3 * x4 * x9) ==
      -1060680)
    {
      printf ("I am here at depth 2");
      if ((1 * x0 * x3 * x4 * x5 * x8 * x9 * x9) +
	  (1 * x0 * x2 * x2 * x7 * x7 * x7) == 0)
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
