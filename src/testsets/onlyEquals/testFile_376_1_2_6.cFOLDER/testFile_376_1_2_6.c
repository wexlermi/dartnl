#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = 1
// x1 = 5
  if ((-3 * x0 * x0 * x0 * x0 * x0 * x1) + (1 * x0 * x0 * x0 * x0 * x1 * x1) +
      (-1 * x0 * x0 * x1 * x1 * x1 * x1) +
      (-1 * x0 * x1 * x1 * x1 * x1 * x1) + (-1 * x1 * x1 * x1 * x1 * x1) +
      (-1 * x0 * x0 * x0 * x0) + (-1 * x0 * x0 * x0 * x1) +
      (4 * x0 * x0 * x1 * x1) + (-2 * x0 * x1 * x1 * x1) +
      (4 * x1 * x1 * x1 * x1) + (1 * x0 * x0 * x0) == -4520)
    {
      printf ("I am here at depth 1");

    }
  else
    {
      printf ("I am at the else of depth 1");
    }
}