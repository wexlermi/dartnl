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
//Possible solution to enter:
// x0 = 10
// x1 = -10
// x2 = 7
// x3 = 6
// x4 = -10
// x5 = -2
// x6 = -7
// x7 = -3
  if ((11 * x4 * x4 * x4 * x5) + (7 * x1 * x6 * x6 * x7) == 32290)
    {
      printf ("I am here at depth 5");
      if ((-1 * x0 * x1 * x1 * x1) != 9936)
	{
	  printf ("I am here at depth 4");
	  if ((-2 * x0 * x0 * x2 * x3) + (-1 * x0 * x1 * x6 * x6) +
	      (2 * x1 * x3 * x7 * x7) + (26 * x4 * x7 * x7 * x7) + (1 * x6) ==
	      2433)
	    {
	      printf ("I am here at depth 3");
	      if ((6 * x0 * x0 * x5 * x5) + (1 * x1 * x6 * x7 * x7) +
		  (3 * x3 * x4 * x4) + (1 * x2) != 4808)
		{
		  printf ("I am here at depth 2");
		  if ((1 * x0 * x0 * x0 * x2) + (-1 * x1 * x3 * x4 * x4) +
		      (-2 * x6 * x6 * x6 * x6) + (-4 * x0 * x0 * x4 * x7) +
		      (1 * x1 * x2 * x5) + (-1 * x2 * x4) == -3592)
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
  else
    {
      printf ("I am at the else of depth 5");
    }
}
