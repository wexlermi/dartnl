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
//Possible solution to enter:
// x0 = 9
// x1 = 4
// x2 = -2
// x3 = 4
// x4 = 0
// x5 = 10
  if ((4 * x0 * x3) != 155)
    {
      printf ("I am here at depth 5");
      if ((2 * x2 * x4) + (1 * x5 * x5) != 183)
	{
	  printf ("I am here at depth 4");
	  if ((19 * x1 * x1) + (1 * x2 * x3) != 324)
	    {
	      printf ("I am here at depth 3");
	      if ((-3 * x0 * x1) + (3 * x2) + (-5 * x3) != -74)
		{
		  printf ("I am here at depth 2");
		  if ((3 * x3 * x3) == 48)
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