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
  int x6;
//Possible solution to enter:
// x0 = 8
// x1 = -1
// x2 = 0
// x3 = 4
// x4 = -6
// x5 = 4
// x6 = -9
  if ((1 * x1 * x6) != 60)
    {
      printf ("I am here at depth 8");
      if ((2 * x4 * x4) != 89)
	{
	  printf ("I am here at depth 7");
	  if ((7 * x2 * x6) + (1 * 1) != -4)
	    {
	      printf ("I am here at depth 6");
	      if ((-5 * x0 * x5) + (6 * x0) + (-180 * x5) != -829)
		{
		  printf ("I am here at depth 5");
		  if ((2 * x3 * x3) + (8 * x3 * x4) != -65)
		    {
		      printf ("I am here at depth 4");
		      if ((1 * x1 * x4) + (-1 * x0 * x5) == -26)
			{
			  printf ("I am here at depth 3");
			  if ((-3 * x0 * x3) + (132 * x4 * x4) != 4702)
			    {
			      printf ("I am here at depth 2");
			      if ((1 * x5 * x5) + (-1 * x5) != -26)
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