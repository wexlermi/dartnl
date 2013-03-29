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
// x0 = -9
// x1 = -1
// x2 = 9
// x3 = 1
// x4 = 9
// x5 = -9
// x6 = 7
// x7 = 1
  if ((-1 * x0 * x1 * x5) == 81)
    {
      printf ("I am here at depth 7");
      if ((1 * x3 * x5 * x5) == 81)
	{
	  printf ("I am here at depth 6");
	  if ((2 * x6 * x6 * x6) + (1 * x1 * x1 * x7) + (2 * x1 * x5) == 705)
	    {
	      printf ("I am here at depth 5");
	      if ((2 * x5 * x7) == -18)
		{
		  printf ("I am here at depth 4");
		  if ((11 * x0 * x1) + (2 * x0 * x2) + (-1 * x3 * x5) == -54)
		    {
		      printf ("I am here at depth 3");
		      if ((-1 * x3 * x5 * x5) + (-1 * x0 * x2 * x7) +
			  (4 * x2 * x2 * x7) + (-11 * x3 * x3 * x7) == 313)
			{
			  printf ("I am here at depth 2");
			  if ((-1 * x0 * x3 * x3) + (-1 * x3 * x3 * x6) +
			      (-1 * x1 * x1 * x7) + (18 * x4 * x6 * x7) +
			      (-1 * x1 * x4) + (-1 * x0 * x7) == 1153)
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
