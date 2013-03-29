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
// x0 = -1
// x1 = -7
// x2 = 9
// x3 = 5
// x4 = -4
// x5 = 7
// x6 = 1
  if ((1 * 1) == 1)
    {
      printf ("I am here at depth 10");
      if ((2 * x3) == 10)
	{
	  printf ("I am here at depth 9");
	  if ((7 * x3) == 35)
	    {
	      printf ("I am here at depth 8");
	      if ((-12 * x2) == -108)
		{
		  printf ("I am here at depth 7");
		  if ((-13 * x1) == 91)
		    {
		      printf ("I am here at depth 6");
		      if ((1 * x5) == 7)
			{
			  printf ("I am here at depth 5");
			  if ((2 * x2) == 18)
			    {
			      printf ("I am here at depth 4");
			      if ((6 * x3) == 30)
				{
				  printf ("I am here at depth 3");
				  if ((2 * x4) == -8)
				    {
				      printf ("I am here at depth 2");
				      if ((1 * x5) == 7)
					{
					  printf ("I am here at depth 1");

					}
				      else
					{
					  printf
					    ("I am at the else of depth 1");
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
      else
	{
	  printf ("I am at the else of depth 9");
	}
    }
  else
    {
      printf ("I am at the else of depth 10");
    }
}
