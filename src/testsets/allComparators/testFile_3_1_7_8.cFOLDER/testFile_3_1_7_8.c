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
// x0 = -6
// x1 = -7
// x2 = -7
// x3 = 0
// x4 = 5
// x5 = -1
// x6 = 0
  if ((1 * x1 * x1 * x1 * x2 * x2 * x4 * x4 * x6) +
      (1 * x0 * x1 * x4 * x4 * x4 * x4 * x6 * x6) +
      (1 * x3 * x3 * x3 * x3 * x4 * x6 * x6) + (1 * x0 * x0 * x0 * x0 * x3) +
      (1 * x3 * x5 * x6 * x6) >= -59)
    {
      printf ("I am here at depth 1");

    }
  else
    {
      printf ("I am at the else of depth 1");
    }
}