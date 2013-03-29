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
//Possible solution to enter:
// x0 = -2
// x1 = -3
// x2 = -8
// x3 = 6
// x4 = -3
// x5 = 10
// x6 = 0
// x7 = 8
// x8 = 9
  if ((1 * x3 * x4 * x4 * x4 * x4 * x6 * x6 * x6 * x6 * x8) +
      (1 * x0 * x1 * x2 * x2 * x3 * x3 * x3 * x3 * x7 * x8) +
      (-1 * x0 * x0 * x2 * x2 * x2 * x4 * x6 * x6 * x6) <= 35831826)
    {
      printf ("I am here at depth 1");

    }
  else
    {
      printf ("I am at the else of depth 1");
    }
}
