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
// x0 = -1
// x1 = 5
// x2 = 2
// x3 = -3
// x4 = 8
// x5 = 9
// x6 = 6
// x7 = 1
  if ((-1 * x2) != -98)
    {
      printf ("I am here at depth 7");
      if ((-1 * 1) >= -44)
	{
	  printf ("I am here at depth 6");
	  if ((-1 * x5) > -40)
	    {
	      printf ("I am here at depth 5");
	      if ((-2 * 1) < 10)
		{
		  printf ("I am here at depth 4");
		  if ((-1 * x5) >= -41)
		    {
		      printf ("I am here at depth 3");
		      if ((3 * x3) <= 13)
			{
			  printf ("I am here at depth 2");
			  if ((2 * x2) != -4)
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