#include <stdio.h>

int
main (int argc, char **argv)
{
  int x0;
  int x1;
  int x2;
  int x3;
//Possible solution to enter:
// x0 = -9
// x1 = 6
// x2 = -9
// x3 = 5
  if ((1 * x3) == 5)
    {
      printf ("I am here at depth 10");
      if ((-1 * x2) == 9)
	{
	  printf ("I am here at depth 9");
	  if ((-1 * x2) != 66)
	    {
	      printf ("I am here at depth 8");
	      if ((1 * x2) == -9)
		{
		  printf ("I am here at depth 7");
		  if ((-8 * x1) == -48)
		    {
		      printf ("I am here at depth 6");
		      if ((1 * x1) != -42)
			{
			  printf ("I am here at depth 5");
			  if ((1 * x1) != 89)
			    {
			      printf ("I am here at depth 4");
			      if ((-2 * x1) != -94)
				{
				  printf ("I am here at depth 3");
				  if ((-1 * x2) != -90)
				    {
				      printf ("I am here at depth 2");
				      if ((3 * x3) == 15)
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