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
// x0 = 4
// x1 = 8
// x2 = -10
// x3 = -2
// x4 = -4
// x5 = -1
// x6 = 6
  if ((1 * 1) == 1)
    {
      printf ("I am here at depth 6");
      if ((-3 * x3) != 88)
	{
	  printf ("I am here at depth 5");
	  if ((-4 * x2) != 52)
	    {
	      printf ("I am here at depth 4");
	      if ((-1 * x6) != -68)
		{
		  printf ("I am here at depth 3");
		  if ((1 * x2) == -10)
		    {
		      printf ("I am here at depth 2");
		      if ((175 * x3) == -350)
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
