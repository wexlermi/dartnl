#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
  int x4;
//Possible solution to enter:
// x0 = -6
// x1 = -2
// x2 = 7
// x3 = 4
// x4 = -9
  if ((1 * x1 * x1 * x3) + (-2 * x1 * x2 * x4) == -236)
    {
      printf ("I am here at depth 5");
      if ((2 * x1 * x2 * x4) == 252)
	{
	  printf ("I am here at depth 4");
	  if ((2 * x2) + (1 * x3) == 18)
	    {
	      printf ("I am here at depth 3");
	      if ((-1 * x0 * x2 * x2) == 294)
		{
		  printf ("I am here at depth 2");
		  if ((1 * x2 * x2 * x4) + (-9 * x0 * x3 * x4) +
		      (-3 * x0 * x0) + (-4 * x1 * x3) + (1 * x0) == -2467)
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
