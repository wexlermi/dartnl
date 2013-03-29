#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = 10
// x1 = 9
// x2 = -8
// x3 = 10
  if ((-3 * x1) <= 48)
    {
      printf ("I am here at depth 4");
      if ((2 * x1) < 103)
	{
	  printf ("I am here at depth 3");
	  if ((-1 * x1) != -48)
	    {
	      printf ("I am here at depth 2");
	      if ((10 * x3) > 89)
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
