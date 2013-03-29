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
  int x11;
  int x12;
  int x13;
  int x14;
  int x15;
  int x16;
//Possible solution to enter:
// x0 = -9
// x1 = 4
// x2 = 4
// x3 = 5
// x4 = -7
// x5 = -5
// x6 = -6
// x7 = 1
// x8 = -4
// x9 = 6
// x10 = 7
// x11 = -8
// x12 = 9
// x13 = -5
// x14 = 4
// x15 = -9
// x16 = 5
  if ((3 * x3 * x9 * x11) + (-1 * x8 * x9 * x14) == -624)
    {
      printf ("I am here at depth 8");
      if ((1 * x4 * x5 * x12) + (1 * x4 * x11 * x14) + (-3 * x1 * x4 * x15) +
	  (9 * x8 * x15 * x16) == 1403)
	{
	  printf ("I am here at depth 7");
	  if ((17 * x1 * x8 * x12) + (-6 * x2 * x3 * x15) +
	      (-2 * x8 * x12 * x15) + (20 * x1 * x15) == -2736)
	    {
	      printf ("I am here at depth 6");
	      if ((6 * x4 * x8 * x10) + (1 * x3 * x7 * x15) == 1131)
		{
		  printf ("I am here at depth 5");
		  if ((-5 * x1 * x5 * x6) + (3 * x2 * x6 * x11) +
		      (-1 * x5 * x6 * x14) + (1 * x7 * x11 * x14) +
		      (1 * x9 * x13) == -206)
		    {
		      printf ("I am here at depth 4");
		      if ((9 * x14 * x14 * x14) + (-1 * x2 * x14 * x15) ==
			  720)
			{
			  printf ("I am here at depth 3");
			  if ((2 * x8 * x12 * x14) + (1 * x9 * x11 * x16) +
			      (2 * x9 * x12) == -420)
			    {
			      printf ("I am here at depth 2");
			      if ((-20 * x8 * x13) == -400)
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
  else
    {
      printf ("I am at the else of depth 8");
    }
}
