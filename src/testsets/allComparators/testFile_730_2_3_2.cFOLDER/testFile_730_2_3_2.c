#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = 9
// x1 = 10
// x2 = -10
  if ((2 * x0 * x1) + (-9 * x2) == 270)
    {
      printf ("I am here at depth 2");
      if ((-8 * x1 * x2) < 853)
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
