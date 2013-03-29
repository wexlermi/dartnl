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
  int x10;
//Possible solution to enter:
// x0 = 5
// x1 = -10
// x2 = -8
// x3 = 6
// x4 = 8
// x5 = 1
// x6 = -5
// x7 = 9
// x8 = 4
// x9 = -5
// x10 = -7
  if ((-3 * x0 * x6) != -19)
    {
      printf ("I am here at depth 4");
      if ((1 * x0 * x2) + (-4 * x4 * x5) + (1 * x4) == -64)
	{
	  printf ("I am here at depth 3");
	  if ((1 * x7) != 96)
	    {
	      printf ("I am here at depth 2");
	      if ((7 * x1 * x9) + (-1 * x5 * x9) != 284)
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
  else
    {
      printf ("I am at the else of depth 4");
    }
}
