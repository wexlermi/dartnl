#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
//Possible solution to enter:
// x0 = -2
// x1 = -6
  if ((-10 * x0) != 80)
    {
      printf ("I am here at depth 10");
      if ((3 * x0 * x0) + (1 * x0) > -5)
	{
	  printf ("I am here at depth 9");
	  if ((3 * x1 * x1) >= 106)
	    {
	      printf ("I am here at depth 8");
	      if ((-2 * x1 * x1) >= -96)
		{
		  printf ("I am here at depth 7");
		  if ((1 * x1) + (1 * 1) == -5)
		    {
		      printf ("I am here at depth 6");
		      if ((2 * 1) != 91)
			{
			  printf ("I am here at depth 5");
			  if ((-16 * x0 * x1) + (1 * x1 * x1) + (1 * x1) ==
			      -162)
			    {
			      printf ("I am here at depth 4");
			      if ((1 * x0 * x1) + (-8 * x1 * x1) < -178)
				{
				  printf ("I am here at depth 3");
				  if ((1 * x1) < 39)
				    {
				      printf ("I am here at depth 2");
				      if ((3 * x1 * x1) + (2 * x1) != 176)
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
