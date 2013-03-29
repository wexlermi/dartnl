#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = 8
// x1 = -8
// x2 = -9
  if ((-1 * x0 * x2) == 72)
    {
      printf ("I am here at depth 2");
      if ((-3 * x0 * x2) + (-8 * x2 * x2) == -432)
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
