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
  int x11;
//Possible solution to enter:
// x0 = -7
// x1 = 9
// x2 = 10
// x3 = 0
// x4 = 10
// x5 = 8
// x6 = 10
// x7 = 10
// x8 = 2
// x9 = -9
// x10 = 6
// x11 = -4
  if ((2 * x0 * x0 * x2 * x2 * x4 * x4 * x4) +
      (1 * x1 * x1 * x3 * x4 * x5 * x6 * x6) +
      (1 * x0 * x1 * x6 * x6 * x6 * x6 * x6) +
      (-2 * x0 * x2 * x2 * x5 * x5 * x6 * x7) +
      (-2 * x1 * x1 * x3 * x4 * x4 * x7 * x7) +
      (3 * x0 * x3 * x3 * x4 * x5 * x6 * x8) +
      (1 * x0 * x1 * x5 * x5 * x8 * x8 * x8) +
      (1 * x0 * x0 * x5 * x5 * x6 * x6 * x9) +
      (1 * x0 * x2 * x3 * x4 * x5 * x8 * x9) +
      (-1 * x0 * x2 * x5 * x5 * x8 * x9 * x10) +
      (-1 * x0 * x1 * x2 * x7 * x9 * x9 * x10) +
      (-4 * x1 * x3 * x6 * x7 * x9 * x9 * x10) +
      (-2 * x7 * x7 * x7 * x7 * x9 * x9 * x10) +
      (-1 * x0 * x2 * x2 * x7 * x8 * x8 * x11) +
      (-1 * x0 * x6 * x9 * x10 * x10 * x10 * x11) +
      (17 * x1 * x7 * x7 * x7 * x7 * x9) +
      (-1 * x2 * x2 * x6 * x7 * x7 * x11) +
      (1 * x2 * x6 * x7 * x10 * x10 * x11) + (-4 * x6 * x8 * x10) ==
      -10618856)
    {
      printf ("I am here at depth 2");
      if ((2 * x1 * x7 * x8 * x8 * x8 * x8 * x9) +
	  (2 * x1 * x1 * x2 * x6 * x9 * x9 * x10) +
	  (11 * x1 * x1 * x1 * x2 * x2 * x5 * x11) +
	  (1 * x1 * x2 * x4 * x5 * x6 * x9 * x11) +
	  (-3 * x0 * x3 * x4 * x8 * x9 * x9 * x11) +
	  (-3 * x0 * x1 * x1 * x3 * x3 * x11 * x11) +
	  (-1 * x2 * x2 * x2 * x7 * x11 * x11 * x11) +
	  (-3 * x3 * x3 * x4 * x8 * x9 * x9) +
	  (7 * x1 * x4 * x6 * x6 * x9 * x10) + (1 * x0 * x5 * x6 * x7 * x8) +
	  (-44 * x1 * x4 * x6 * x8 * x9) + (13 * x2 * x3 * x6 * x6 * x10) ==
	  -17281920)
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