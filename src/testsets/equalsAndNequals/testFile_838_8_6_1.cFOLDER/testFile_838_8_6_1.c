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
// x0 = -1
// x1 = -8
// x2 = 2
// x3 = -5
// x4 = 10
// x5 = -4
  if ((3 * x1) != 51)
    {
      printf ("I am here at depth 8");
      if ((7 * x2) == 14)
	{
	  printf ("I am here at depth 7");
	  if ((-3 * 1) != -77)
	    {
	      printf ("I am here at depth 6");
	      if ((-1 * x1) != 5)
		{
		  printf ("I am here at depth 5");
		  if ((1 * x1) != 18)
		    {
		      printf ("I am here at depth 4");
		      if ((1 * x4) == 10)
			{
			  printf ("I am here at depth 3");
			  if ((-4 * x3) == 20)
			    {
			      printf ("I am here at depth 2");
			      if ((35 * x2) == 70)
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
  else
    {
      printf ("I am at the else of depth 8");
    }
}
