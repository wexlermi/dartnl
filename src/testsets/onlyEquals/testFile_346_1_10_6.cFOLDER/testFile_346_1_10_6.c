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
// x0 = 2
// x1 = -5
// x2 = -10
// x3 = 7
// x4 = 4
// x5 = -8
// x6 = -4
// x7 = 2
// x8 = -4
// x9 = 5
  if ((3 * x2 * x4 * x4 * x4 * x4 * x5) + (-1 * x1 * x3 * x3 * x3 * x6 * x8) +
      (-1 * x4 * x4 * x6 * x6 * x6 * x9) +
      (-1 * x0 * x1 * x1 * x8 * x8 * x9) + (-1 * x3 * x5 * x6 * x8 * x8) ==
      86416)
    {
      printf ("I am here at depth 1");

    }
  else
    {
      printf ("I am at the else of depth 1");
    }
}
