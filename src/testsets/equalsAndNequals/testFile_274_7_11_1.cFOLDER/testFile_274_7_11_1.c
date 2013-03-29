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
  int x8;
  int x9;
  int x10;
//Possible solution to enter:
// x0 = 1
// x1 = 6
// x2 = -1
// x3 = 9
// x4 = 9
// x5 = -6
// x6 = -1
// x7 = 1
// x8 = 2
// x9 = 0
// x10 = 1
  if ((7 * 1) != 51)
    {
      printf ("I am here at depth 7");
      if ((9 * x7) != 92)
	{
	  printf ("I am here at depth 6");
	  if ((-1 * x7) == -1)
	    {
	      printf ("I am here at depth 5");
	      if ((-1 * x6) == 1)
		{
		  printf ("I am here at depth 4");
		  if ((-2 * x9) == 0)
		    {
		      printf ("I am here at depth 3");
		      if ((-1 * x3) != 15)
			{
			  printf ("I am here at depth 2");
			  if ((-4 * x3) != -108)
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
