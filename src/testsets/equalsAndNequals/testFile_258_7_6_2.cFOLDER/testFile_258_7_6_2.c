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
// x0 = -10
// x1 = -1
// x2 = 9
// x3 = -9
// x4 = -2
// x5 = 0
  if ((1 * x0 * x2) + (7 * x1) + (-5 * 1) != -134)
    {
      printf ("I am here at depth 7");
      if ((3 * x4 * x5) + (1 * 1) != 30)
	{
	  printf ("I am here at depth 6");
	  if ((-1 * x0 * x5) == 0)
	    {
	      printf ("I am here at depth 5");
	      if ((2 * x0 * x1) + (1 * x3 * x5) != -57)
		{
		  printf ("I am here at depth 4");
		  if ((1 * x1 * x3) == 9)
		    {
		      printf ("I am here at depth 3");
		      if ((-1 * x1 * x2) != -91)
			{
			  printf ("I am here at depth 2");
			  if ((-1 * x1 * x1) == -1)
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
  else
    {
      printf ("I am at the else of depth 7");
    }
}