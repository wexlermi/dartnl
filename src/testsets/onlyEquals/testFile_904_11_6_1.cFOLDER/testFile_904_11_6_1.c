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
//Possible solution to enter:
// x0 = -5
// x1 = -10
// x2 = 0
// x3 = 2
// x4 = 8
// x5 = -3
  if ((3 * x1) == -30)
    {
      printf ("I am here at depth 11");
      if ((2 * x1) == -20)
	{
	  printf ("I am here at depth 10");
	  if ((-1 * x2) == 0)
	    {
	      printf ("I am here at depth 9");
	      if ((-2 * x4) == -16)
		{
		  printf ("I am here at depth 8");
		  if ((-1 * x1) == 10)
		    {
		      printf ("I am here at depth 7");
		      if ((-2 * x3) == -4)
			{
			  printf ("I am here at depth 6");
			  if ((-1 * 1) == -1)
			    {
			      printf ("I am here at depth 5");
			      if ((-1 * x5) == 3)
				{
				  printf ("I am here at depth 4");
				  if ((1 * 1) == 1)
				    {
				      printf ("I am here at depth 3");
				      if ((1 * x3) == 2)
					{
					  printf ("I am here at depth 2");
					  if ((-1 * x2) == 0)
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
					  printf
					    ("I am at the else of depth 2");
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
  else
    {
      printf ("I am at the else of depth 11");
    }
}