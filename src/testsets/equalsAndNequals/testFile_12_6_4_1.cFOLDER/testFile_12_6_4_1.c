#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = 8
// x1 = 8
// x2 = -10
// x3 = -4
  if ((4 * x1) != -40)
    {
      printf ("I am here at depth 6");
      if ((-10 * x1) != -121)
	{
	  printf ("I am here at depth 5");
	  if ((-1 * 1) != 45)
	    {
	      printf ("I am here at depth 4");
	      if ((-4 * x1) == -32)
		{
		  printf ("I am here at depth 3");
		  if ((2 * x3) != 28)
		    {
		      printf ("I am here at depth 2");
		      if ((-3 * 1) == -3)
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
