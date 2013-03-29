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
// x0 = 8
// x1 = 7
// x2 = -6
// x3 = -10
// x4 = 7
// x5 = -5
// x6 = -4
// x7 = -7
// x8 = 6
// x9 = 0
// x10 = -5
// x11 = 10
  if ((-3 * x2 * x2 * x4 * x5 * x6 * x7) +
      (-1 * x7 * x7 * x7 * x7 * x7 * x7) +
      (-3 * x1 * x2 * x4 * x6 * x7 * x8) +
      (-1 * x2 * x3 * x7 * x8 * x8 * x8) +
      (-1 * x1 * x1 * x1 * x2 * x3 * x10) +
      (-2 * x1 * x1 * x2 * x6 * x9 * x10) +
      (15 * x2 * x2 * x2 * x5 * x9 * x11) + (-20 * x3 * x5 * x5 * x6 * x7) +
      (1 * x4 * x5 * x8 * x10 * x10) == 464737)
    {
      printf ("I am here at depth 1");

    }
  else
    {
      printf ("I am at the else of depth 1");
    }
}
