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
//Possible solution to enter:
// x0 = -4
// x1 = 0
// x2 = 0
// x3 = 4
// x4 = 10
// x5 = 10
  if ((1 * x0 * x0 * x1 * x1 * x2 * x2 * x2 * x2) +
      (1 * x0 * x0 * x2 * x2 * x3 * x3 * x4 * x4) +
      (-1 * x1 * x2 * x2 * x2 * x3 * x3 * x4) +
      (-1 * x0 * x2 * x4 * x4 * x4 * x4 * x5) +
      (3 * x1 * x2 * x4 * x4 * x5 * x5 * x5) != 96)
    {
      printf ("I am here at depth 1");

    }
  else
    {
      printf ("I am at the else of depth 1");
    }
}
