#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = 6
// x1 = 6
// x2 = -7
// x3 = 5
  if ((-5 * x2) != 11)
    {
      printf ("I am here at depth 10");
      if ((-5 * x1) == -30)
	{
	  printf ("I am here at depth 9");
	  if ((2 * x3) == 10)
	    {
	      printf ("I am here at depth 8");
	      if ((1 * x3) == 5)
		{
		  printf ("I am here at depth 7");
		  if ((-27 * x2) == 189)
		    {
		      printf ("I am here at depth 6");
		      if ((-12 * x3) != -110)
			{
			  printf ("I am here at depth 5");
			  if ((1 * x3) == 5)
			    {
			      printf ("I am here at depth 4");
			      if ((1 * x3) == 5)
				{
				  printf ("I am here at depth 3");
				  if ((-2 * x1) != -45)
				    {
				      printf ("I am here at depth 2");
				      if ((-6 * x2) != 27)
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
