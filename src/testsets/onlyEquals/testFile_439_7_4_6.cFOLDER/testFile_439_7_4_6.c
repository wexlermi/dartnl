#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = -7
// x1 = -3
// x2 = 5
// x3 = -6
  if ((-2 * x0 * x0 * x2 * x2 * x2 * x3) + (1 * x2 * x2 * x2 * x2 * x2) +
      (-1 * x2 * x3) == 76655)
    {
      printf ("I am here at depth 7");
      if ((-3 * x0 * x2 * x2) + (-1 * x0 * x3) + (-71 * x3 * x3) == -2073)
	{
	  printf ("I am here at depth 6");
	  if ((-2 * x0 * x1 * x1 * x2 * x2) + (-1 * x1 * x1 * x2 * x3 * x3) +
	      (-2 * x3 * x3 * x3 * x3) + (3 * x1 * x2 * x2) +
	      (-1 * x0 * x3 * x3) == -1035)
	    {
	      printf ("I am here at depth 5");
	      if ((11 * x0 * x1 * x1 * x1 * x3 * x3) == 74844)
		{
		  printf ("I am here at depth 4");
		  if ((-1 * x0 * x0 * x0 * x0 * x1 * x2) +
		      (1 * x0 * x0 * x0 * x1 * x1 * x2) +
		      (4 * x1 * x1 * x1 * x2 * x2 * x2) +
		      (-2 * x1 * x2 * x2 * x2 * x2 * x2) +
		      (-2 * x0 * x0 * x1 * x2 * x3 * x3) +
		      (9 * x3 * x3 * x3 * x3) + (-2 * x0 * x0 * x2) +
		      (1 * x0 * x2 * x3) + (-3 * x0 * x1) + (1 * x3 * x3) ==
		      90107)
		    {
		      printf ("I am here at depth 3");
		      if ((-15 * x0 * x0 * x0 * x1 * x1 * x1) +
			  (5 * x0 * x0 * x0 * x1 * x1 * x2) +
			  (2 * x1 * x2 * x2 * x2 * x2 * x2) +
			  (1 * x0 * x0 * x1 * x1 * x3 * x3) +
			  (-57 * x0 * x2 * x2 * x2 * x3 * x3) +
			  (2 * x0 * x0 * x2 * x3 * x3) +
			  (1 * x1 * x1 * x1 * x2) == 1594041)
			{
			  printf ("I am here at depth 2");
			  if ((-1 * x0 * x0 * x0 * x0 * x2 * x3) +
			      (5 * x2 * x2 * x2 * x2 * x2 * x3) +
			      (1 * x0 * x0 * x1 * x1 * x3 * x3) +
			      (3 * x0 * x1 * x1 * x2 * x3 * x3) +
			      (-1 * x0 * x1 * x2 * x3 * x3 * x3) +
			      (-1 * x2 * x2 * x3 * x3 * x3 * x3) +
			      (3 * x1 * x1 * x1 * x2 * x3) +
			      (-39 * x1 * x2 * x2 * x3 * x3) +
			      (1 * x0 * x2 * x2 * x3) + (9 * x1 * x2 * x2) +
			      (1 * x2 * x3) == 58491)
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
