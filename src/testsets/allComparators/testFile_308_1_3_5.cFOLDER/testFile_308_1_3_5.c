#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = -6
// x1 = 1
// x2 = -5
  if ((1 * x0 * x1 * x1 * x1 * x1) + (5 * x0 * x0 * x2 * x2 * x2) +
      (18 * x0 * x0 * x0 * x1) + (1 * x0 * x0 * x0 * x2) +
      (3 * x0 * x1 * x1 * x2) + (-1 * x2) == -25219)
    {
      printf ("I am here at depth 1");

    }
  else
    {
      printf ("I am at the else of depth 1");
    }
}
