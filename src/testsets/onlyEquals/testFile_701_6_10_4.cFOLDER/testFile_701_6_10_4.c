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
// x0 = -1
// x1 = 7
// x2 = 0
// x3 = -2
// x4 = -10
// x5 = 7
// x6 = 8
// x7 = 10
// x8 = 8
// x9 = 4
  if ((-5 * x1 * x3 * x4 * x4) + (-1 * x0 * x2 * x3 * x8) +
      (-1 * x2 * x2 * x3 * x8) + (2 * x0 * x4 * x8 * x8) +
      (-3 * x2 * x3 * x5 * x9) + (1 * x3 * x3 * x5) + (-3 * x1 * x9 * x9) +
      (27 * x4 * x5) + (-1 * x2 * x6) == 6082)
    {
      printf ("I am here at depth 6");
      if ((4 * x1 * x3 * x5 * x6) + (2 * x0 * x5 * x5 * x8) +
	  (1 * x3 * x3 * x4 * x9) + (2 * x1 * x3 * x5) + (-2 * x4 * x5 * x6) +
	  (1 * x1 * x1 * x9) == -2960)
	{
	  printf ("I am here at depth 5");
	  if ((-1 * x2 * x4 * x4 * x5) + (-1 * x4 * x4 * x5 * x5) +
	      (-1 * x1 * x6 * x7 * x8) + (-1 * x3 * x7 * x7 * x8) +
	      (1 * x4 * x6 * x9) == -8100)
	    {
	      printf ("I am here at depth 4");
	      if ((-5 * x1 * x2 * x2 * x7) + (1 * x0 * x0 * x2 * x8) +
		  (2 * x1 * x1 * x5 * x8) + (1 * x2 * x5 * x8 * x8) +
		  (1 * x1 * x4 * x4 * x9) + (-2 * x1 * x8 * x8 * x9) +
		  (12 * x4 * x4 * x4) == -7296)
		{
		  printf ("I am here at depth 3");
		  if ((-1 * x1 * x1 * x2 * x3) + (-20 * x0 * x0 * x1 * x4) +
		      (-116 * x0 * x2 * x2 * x5) + (1 * x1 * x2 * x5 * x5) +
		      (2 * x0 * x3 * x5 * x5) + (-1 * x4 * x5 * x6 * x6) +
		      (1 * x3 * x5 * x7 * x8) + (-4 * x2 * x4 * x4 * x9) +
		      (-1 * x0 * x3 * x7) == 4936)
		    {
		      printf ("I am here at depth 2");
		      if ((-1 * x2 * x6 * x8) == 0)
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
  else
    {
      printf ("I am at the else of depth 6");
    }
}