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
// x0 = 10
// x1 = -3
// x2 = 5
// x3 = 1
// x4 = -6
// x5 = 6
  if ((-2 * x1) == 6)
    {
      printf ("I am here at depth 6");
      if ((1 * x4) == -6)
	{
	  printf ("I am here at depth 5");
	  if ((1 * x3) == 1)
	    {
	      printf ("I am here at depth 4");
	      if ((1 * x1) == -3)
		{
		  printf ("I am here at depth 3");
		  if ((-1 * x5) == -6)
		    {
		      printf ("I am here at depth 2");
		      if ((1 * x2) == 5)
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