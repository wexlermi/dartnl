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
// x0 = 9
// x1 = -2
// x2 = -3
// x3 = -1
// x4 = -3
// x5 = 1
// x6 = 3
  if ((-2 * x5) >= -98)
    {
      printf ("I am here at depth 7");
      if ((-1 * x2) > -36)
	{
	  printf ("I am here at depth 6");
	  if ((1 * x3) == -1)
	    {
	      printf ("I am here at depth 5");
	      if ((2 * x2) >= -43)
		{
		  printf ("I am here at depth 4");
		  if ((1 * x1) > -9)
		    {
		      printf ("I am here at depth 3");
		      if ((-2 * 1) < 42)
			{
			  printf ("I am here at depth 2");
			  if ((-1 * x2) == 3)
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