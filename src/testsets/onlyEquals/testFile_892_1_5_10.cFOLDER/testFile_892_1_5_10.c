#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
  int x4;
//Possible solution to enter:
// x0 = -8
// x1 = -3
// x2 = -6
// x3 = -1
// x4 = -4
  if ((2 * x0 * x0 * x0 * x0 * x0 * x0 * x0 * x3 * x3 * x4) +
      (2 * x0 * x0 * x0 * x0 * x1 * x1 * x1 * x3 * x3 * x4) +
      (1 * x0 * x1 * x1 * x2 * x2 * x2 * x2 * x3 * x4 * x4) +
      (1 * x2 * x2 * x2 * x2 * x2 * x2 * x2 * x3 * x4 * x4) +
      (2 * x0 * x0 * x1 * x1 * x1 * x3 * x3 * x3 * x4 * x4) +
      (5 * x0 * x1 * x1 * x2 * x2 * x2 * x3 * x4 * x4 * x4) +
      (-1 * x0 * x2 * x2 * x3 * x3 * x3 * x3 * x4 * x4 * x4) +
      (-1 * x0 * x0 * x2 * x2 * x2 * x4 * x4 * x4 * x4 * x4) +
      (1 * x0 * x0 * x1 * x1 * x1 * x2 * x3 * x3 * x3) +
      (1 * x0 * x0 * x1 * x1 * x1 * x3 * x3 * x3 * x3) +
      (2 * x0 * x2 * x2 * x2 * x2 * x2 * x3 * x3 * x4) +
      (2 * x0 * x0 * x2 * x3 * x4 * x4 * x4) + (-4 * x1 * x3 * x3 * x4) ==
      13932688)
    {
      printf ("I am here at depth 1");

    }
  else
    {
      printf ("I am at the else of depth 1");
    }
}
