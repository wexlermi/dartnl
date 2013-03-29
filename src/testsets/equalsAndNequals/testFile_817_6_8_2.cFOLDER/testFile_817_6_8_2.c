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
// x0 = 8
// x1 = -7
// x2 = 2
// x3 = 7
// x4 = 4
// x5 = 3
// x6 = 3
// x7 = 5
  if ((-1 * x0 * x2) + (-2 * x0 * x7) != -134)
    {
      printf ("I am here at depth 6");
      if ((-3 * x1 * x3) != 136)
	{
	  printf ("I am here at depth 5");
	  if ((1 * x2 * x4) + (1 * x3 * x6) != 27)
	    {
	      printf ("I am here at depth 4");
	      if ((-1 * x0 * x3) + (1 * x2 * x7) != -146)
		{
		  printf ("I am here at depth 3");
		  if ((-1 * x3 * x3) + (1 * x7) != -19)
		    {
		      printf ("I am here at depth 2");
		      if ((-4 * x1 * x3) + (-32 * 1) != 163)
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
