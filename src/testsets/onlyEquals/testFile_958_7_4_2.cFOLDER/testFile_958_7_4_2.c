#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = 9
// x1 = 0
// x2 = -8
// x3 = 8
  if ((-2 * x1 * x2) + (1 * x0 * x3) + (1 * x3 * x3) == 136)
    {
      printf ("I am here at depth 7");
      if ((-2 * x3 * x3) + (-35 * x2) + (-2 * 1) == 150)
	{
	  printf ("I am here at depth 6");
	  if ((-2 * x1 * x2) + (-2 * x1) == 0)
	    {
	      printf ("I am here at depth 5");
	      if ((-2 * x3) == -16)
		{
		  printf ("I am here at depth 4");
		  if ((-7 * x3) == -56)
		    {
		      printf ("I am here at depth 3");
		      if ((-7 * x3 * x3) + (-1 * x1) + (1 * 1) == -447)
			{
			  printf ("I am here at depth 2");
			  if ((-1 * x1 * x1) + (-4 * x2 * x2) == -256)
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