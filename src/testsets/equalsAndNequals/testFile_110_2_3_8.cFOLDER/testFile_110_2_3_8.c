#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = -2
// x1 = 6
// x2 = 9
  if ((-2 * x0 * x0 * x0 * x0 * x0 * x0 * x0 * x1) +
      (-1 * x0 * x1 * x1 * x1 * x1 * x1 * x1 * x1) +
      (1 * x0 * x0 * x0 * x0 * x0 * x0 * x0 * x2) +
      (1 * x0 * x0 * x0 * x0 * x0 * x1 * x1 * x2) +
      (-3 * x1 * x1 * x1 * x1 * x1 * x1 * x1 * x2) +
      (1 * x0 * x0 * x0 * x0 * x2 * x2 * x2 * x2) +
      (1 * x1 * x1 * x2 * x2 * x2 * x2 * x2 * x2) +
      (-2 * x2 * x2 * x2 * x2 * x2 * x2 * x2 * x2) +
      (-3 * x0 * x0 * x0 * x0 * x0 * x1 * x1) +
      (-6 * x0 * x0 * x0 * x0 * x1 * x1 * x1) +
      (-4 * x0 * x1 * x1 * x1 * x1 * x1 * x1) +
      (-4 * x0 * x0 * x0 * x1 * x1 * x1 * x2) +
      (2 * x1 * x1 * x1 * x1 * x2 * x2 * x2) +
      (-7 * x0 * x1 * x1 * x2 * x2 * x2 * x2) +
      (-1 * x0 * x0 * x1 * x1 * x1 * x1) + (-2 * x0 * x0 * x0 * x0 * x2) +
      (-4 * x0 * x0 * x0 * x2) + (1 * x0 * x0 * x2 * x2) + (-1 * x0 * x2) +
      (178 * x0) == -68255684)
    {
      printf ("I am here at depth 2");
      if ((3 * x0 * x0 * x0 * x0 * x0 * x1 * x1 * x1) +
	  (12 * x0 * x0 * x0 * x0 * x0 * x1 * x1 * x2) +
	  (-1 * x0 * x0 * x0 * x0 * x0 * x1 * x2 * x2) +
	  (-2 * x0 * x0 * x1 * x2 * x2 * x2 * x2 * x2) +
	  (-1 * x0 * x1 * x1 * x2 * x2 * x2 * x2 * x2) +
	  (14 * x1 * x1 * x1 * x2 * x2 * x2 * x2 * x2) +
	  (-1 * x0 * x0 * x0 * x0 * x0 * x0 * x1) +
	  (-220 * x0 * x1 * x1 * x1 * x1 * x1 * x2) +
	  (2 * x0 * x0 * x0 * x0 * x0 * x0) +
	  (-1 * x0 * x0 * x0 * x1 * x1 * x1) +
	  (1 * x0 * x1 * x1 * x1 * x1 * x2) == 210622856)
	{
	  printf ("I am here at depth 1");

	}
      else
	{
	  printf ("I am at the else of depth 1");
	}
    }
  else
    {
      printf ("I am at the else of depth 2");
    }
}
