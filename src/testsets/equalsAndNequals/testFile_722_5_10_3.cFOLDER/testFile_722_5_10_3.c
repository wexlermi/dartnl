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
// x0 = -8
// x1 = 0
// x2 = 10
// x3 = -5
// x4 = -8
// x5 = -6
// x6 = -10
// x7 = 8
// x8 = -5
// x9 = -6
  if ((2 * x1 * x2 * x6) + (-1 * x5 * x8 * x9) != 81)
    {
      printf ("I am here at depth 5");
      if ((5 * x1 * x1 * x6) + (1 * x1 * x1 * x9) + (2 * x1 * x4) +
	  (-2 * x2 * x9) == 120)
	{
	  printf ("I am here at depth 4");
	  if ((1 * x0 * x1 * x1) + (-1 * x4 * x5 * x5) == 288)
	    {
	      printf ("I am here at depth 3");
	      if ((-17 * x2 * x5 * x6) + (-7 * x6 * x9 * x9) == -7680)
		{
		  printf ("I am here at depth 2");
		  if ((2 * x3 * x3 * x4) + (3 * x3 * x4 * x5) +
		      (1 * x3 * x9 * x9) != -1216)
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