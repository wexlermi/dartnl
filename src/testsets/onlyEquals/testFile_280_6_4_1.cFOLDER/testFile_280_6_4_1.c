#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = -10
// x1 = -3
// x2 = -10
// x3 = -6
  if ((1 * x2) == -10)
    {
      printf ("I am here at depth 6");
      if ((1 * 1) == 1)
	{
	  printf ("I am here at depth 5");
	  if ((-1 * x1) == 3)
	    {
	      printf ("I am here at depth 4");
	      if ((4 * x1) == -12)
		{
		  printf ("I am here at depth 3");
		  if ((-3 * x3) == 18)
		    {
		      printf ("I am here at depth 2");
		      if ((-16 * x3) == 96)
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