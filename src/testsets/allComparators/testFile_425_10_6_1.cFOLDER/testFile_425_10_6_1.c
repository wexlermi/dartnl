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
// x0 = 4
// x1 = 7
// x2 = 1
// x3 = 10
// x4 = -5
// x5 = 7
  if ((1 * x1) >= -20)
    {
      printf ("I am here at depth 10");
      if ((-4 * x3) <= 42)
	{
	  printf ("I am here at depth 9");
	  if ((1 * x1) > -50)
	    {
	      printf ("I am here at depth 8");
	      if ((-7 * x3) <= -1)
		{
		  printf ("I am here at depth 7");
		  if ((-2 * x4) > -37)
		    {
		      printf ("I am here at depth 6");
		      if ((-1 * x1) > -23)
			{
			  printf ("I am here at depth 5");
			  if ((-1 * x4) != 63)
			    {
			      printf ("I am here at depth 4");
			      if ((2 * x4) <= 20)
				{
				  printf ("I am here at depth 3");
				  if ((-2 * x2) <= 82)
				    {
				      printf ("I am here at depth 2");
				      if ((1 * x5) > -48)
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
