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
// x1 = 7
// x2 = 1
// x3 = -6
// x4 = 7
// x5 = -9
// x6 = 5
// x7 = 1
// x8 = -10
// x9 = -10
  if ((2 * x1 * x4 * x4 * x4 * x5 * x6) + (-2 * x0 * x0 * x5 * x5 * x5 * x7) +
      (-16 * x4 * x5 * x7 * x9 * x9 * x9) + (-1 * x0 * x0 * x0 * x2 * x3) +
      (-6 * x0 * x0 * x0 * x6 * x6) == -1219410)
    {
      printf ("I am here at depth 1");

    }
  else
    {
      printf ("I am at the else of depth 1");
    }
}