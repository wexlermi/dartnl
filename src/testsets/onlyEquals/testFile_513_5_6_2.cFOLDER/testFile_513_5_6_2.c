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
// x0 = -7
// x1 = 10
// x2 = 3
// x3 = 10
// x4 = 0
// x5 = 9
  if ((-9 * x0 * x3) == 630)
    {
      printf ("I am here at depth 5");
      if ((1 * x2 * x3) + (1 * x1 * x4) + (2 * x4) == 30)
	{
	  printf ("I am here at depth 4");
	  if ((86 * x4 * x5) == 0)
	    {
	      printf ("I am here at depth 3");
	      if ((-9 * x0 * x3) + (-1 * x1 * x3) == 530)
		{
		  printf ("I am here at depth 2");
		  if ((-2123 * x2 * x2) + (-1 * x0 * x3) == -19037)
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