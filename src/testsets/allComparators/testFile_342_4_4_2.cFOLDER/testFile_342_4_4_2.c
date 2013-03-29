#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = 5
// x1 = 3
// x2 = 9
// x3 = 5
  if ((-2 * x2 * x3) + (-2 * x1) == -96)
    {
      printf ("I am here at depth 4");
      if ((2 * x0 * x1) + (7 * x1 * x1) == 93)
	{
	  printf ("I am here at depth 3");
	  if ((1 * x0 * x1) + (-2 * x1 * x3) + (1 * x2 * x3) == 30)
	    {
	      printf ("I am here at depth 2");
	      if ((1 * x1 * x1) + (-1 * x2 * x2) == -72)
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
