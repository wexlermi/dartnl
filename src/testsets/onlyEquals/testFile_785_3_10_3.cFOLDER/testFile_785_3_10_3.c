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
// x0 = -10
// x1 = -5
// x2 = 3
// x3 = 5
// x4 = 7
// x5 = -5
// x6 = 9
// x7 = -4
// x8 = 8
// x9 = 4
  if ((1 * x1 * x7 * x7) + (41 * x6 * x6 * x9) + (1 * x1 * x8 * x9) +
      (1 * x6 * x9 * x9) == 13188)
    {
      printf ("I am here at depth 3");
      if ((-1 * x0 * x2 * x5) + (-1 * x3 * x5 * x9) + (6 * x0 * x9) == -290)
	{
	  printf ("I am here at depth 2");
	  if ((2 * x4 * x6 * x9) + (-2 * x3 * x3) + (1 * x1 * x7) == 474)
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
  else
    {
      printf ("I am at the else of depth 3");
    }
}
