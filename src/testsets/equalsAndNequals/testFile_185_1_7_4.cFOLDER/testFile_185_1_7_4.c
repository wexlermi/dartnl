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
// x0 = -1
// x1 = 3
// x2 = -5
// x3 = -1
// x4 = -1
// x5 = -8
// x6 = 2
  if ((3 * x1 * x1 * x3 * x3) + (-1 * x2 * x4 * x4 * x5) +
      (-3 * x0 * x2 * x5 * x6) + (-1 * x5 * x5 * x5 * x6) +
      (-11 * x2 * x5 * x6 * x6) + (-3 * x0 * x0 * x4) + (-3 * x0 * x3 * x4) +
      (2 * x3 * x6 * x6) != -475)
    {
      printf ("I am here at depth 1");

    }
  else
    {
      printf ("I am at the else of depth 1");
    }
}
