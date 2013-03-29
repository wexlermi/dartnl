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
  int x7;
//Possible solution to enter:
// x0 = -4
// x1 = -1
// x2 = 7
// x3 = 2
// x4 = -3
// x5 = -7
// x6 = -6
// x7 = -1
  if ((-1 * x1 * x5) + (1 * x2 * x5) != -101)
    {
      printf ("I am here at depth 7");
      if ((8 * x0 * x4) + (1 * x5 * x7) + (1 * x4) == 100)
	{
	  printf ("I am here at depth 6");
	  if ((-3 * x4 * x4) + (-1 * x0 * x5) != -107)
	    {
	      printf ("I am here at depth 5");
	      if ((-2 * x2 * x7) == 14)
		{
		  printf ("I am here at depth 4");
		  if ((-3 * x7) != -22)
		    {
		      printf ("I am here at depth 3");
		      if ((1 * x3) + (-1 * x7) != -76)
			{
			  printf ("I am here at depth 2");
			  if ((1 * x1 * x6) == 6)
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
