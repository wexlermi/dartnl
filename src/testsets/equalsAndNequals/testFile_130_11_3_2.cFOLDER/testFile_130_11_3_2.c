#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
//Possible solution to enter:
// x0 = -6
// x1 = 1
// x2 = -2
  if ((2 * x0 * x2) + (1 * x0) == 18)
    {
      printf ("I am here at depth 11");
      if ((1 * x2) == -2)
	{
	  printf ("I am here at depth 10");
	  if ((4 * x0) == -24)
	    {
	      printf ("I am here at depth 9");
	      if ((12 * x1 * x1) == 12)
		{
		  printf ("I am here at depth 8");
		  if ((3 * x1 * x2) != -56)
		    {
		      printf ("I am here at depth 7");
		      if ((1 * x0 * x1) + (-1 * x0 * x2) + (-19 * x0) == 96)
			{
			  printf ("I am here at depth 6");
			  if ((2 * x0 * x2) + (2 * x0) + (-3 * x2) != 110)
			    {
			      printf ("I am here at depth 5");
			      if ((3 * x1 * x1) + (1 * x1) != -29)
				{
				  printf ("I am here at depth 4");
				  if ((-1 * x1) != -66)
				    {
				      printf ("I am here at depth 3");
				      if ((1 * x0 * x1) + (-1 * x0) == 0)
					{
					  printf ("I am here at depth 2");
					  if ((-1 * x2 * x2) == -4)
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