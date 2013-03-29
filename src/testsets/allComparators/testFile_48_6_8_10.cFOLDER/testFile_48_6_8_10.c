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
// x0 = -7
// x1 = 3
// x2 = -8
// x3 = -7
// x4 = 2
// x5 = -6
// x6 = -2
// x7 = -7
  if ((1 * x0 * x0 * x3 * x3 * x3 * x4 * x4 * x4 * x4 * x4) +
      (1 * x0 * x0 * x1 * x1 * x1 * x1 * x1 * x3 * x4 * x5) +
      (-2 * x0 * x1 * x1 * x1 * x1 * x1 * x3 * x5 * x5 * x5) +
      (1 * x0 * x1 * x1 * x4 * x4 * x4 * x5 * x5 * x5 * x6) +
      (1 * x1 * x2 * x2 * x3 * x3 * x3 * x3 * x3 * x6 * x6) +
      (2 * x1 * x1 * x1 * x2 * x2 * x2 * x2 * x5 * x6 * x6) +
      (6 * x1 * x2 * x2 * x5 * x5 * x5 * x5 * x6 * x6 * x6) +
      (2 * x0 * x0 * x0 * x3 * x3 * x4 * x6 * x6 * x6 * x6) +
      (1 * x4 * x4 * x4 * x5 * x5 * x6 * x6 * x6 * x6 * x6) +
      (-1 * x0 * x0 * x1 * x1 * x2 * x2 * x3 * x3 * x5 * x7) +
      (-1 * x3 * x3 * x3 * x3 * x3 * x3 * x4 * x6 * x6 * x7) +
      (-1 * x0 * x3 * x3 * x3 * x3 * x4 * x4 * x6 * x6 * x7) +
      (-2 * x1 * x2 * x2 * x3 * x3 * x3 * x4 * x4 * x7 * x7) +
      (2 * x0 * x0 * x1 * x2 * x2 * x2 * x4 * x5 * x7 * x7) +
      (3 * x0 * x1 * x4 * x4 * x4 * x4 * x5 * x5 * x7 * x7) +
      (-2 * x0 * x1 * x2 * x3 * x4 * x5 * x6 * x6 * x7 * x7) +
      (1 * x0 * x0 * x3 * x4 * x4 * x6 * x6 * x7 * x7 * x7) +
      (1 * x0 * x0 * x1 * x3 * x6 * x6 * x6 * x7 * x7 * x7) +
      (1 * x3 * x3 * x3 * x4 * x5 * x6 * x7 * x7 * x7 * x7) +
      (1 * x0 * x2 * x2 * x2 * x2 * x3 * x3 * x3 * x5) +
      (9 * x0 * x1 * x2 * x3 * x3 * x3 * x5 * x6 * x6) +
      (-3 * x0 * x1 * x2 * x2 * x3 * x5 * x6 * x6 * x6) +
      (2 * x0 * x0 * x0 * x0 * x0 * x2 * x3 * x4 * x7) +
      (2 * x0 * x0 * x3 * x5 * x6 * x6 * x6 * x6 * x7) +
      (2 * x0 * x0 * x1 * x1 * x2 * x4 * x6 * x7 * x7) +
      (-48 * x1 * x1 * x5 * x5 * x6 * x6 * x6 * x7 * x7) +
      (-1 * x0 * x4 * x4 * x4 * x4 * x4 * x7 * x7 * x7) +
      (21 * x1 * x4 * x5 * x5 * x6 * x6 * x7 * x7 * x7) +
      (1 * x0 * x4 * x4 * x5 * x7 * x7 * x7 * x7 * x7) +
      (2 * x0 * x1 * x3 * x3 * x3 * x5 * x5 * x5) +
      (9 * x1 * x1 * x2 * x2 * x4 * x4 * x5 * x7) +
      (-1 * x0 * x0 * x2 * x2 * x3 * x4 * x6 * x7) +
      (1 * x0 * x1 * x2 * x4 * x7 * x7 * x7 * x7) +
      (-2 * x0 * x0 * x4 * x4 * x5 * x6 * x6) +
      (-1 * x0 * x1 * x1 * x2 * x2 * x4 * x7) +
      (-3 * x4 * x4 * x5 * x6 * x7 * x7 * x7) +
      (-1 * x0 * x1 * x2 * x3 * x4 * x6) +
      (-2 * x1 * x1 * x2 * x6 * x6 * x7) + (1 * x0 * x3 * x3 * x3 * x3) +
      (-1 * x0 * x0 * x0 * x2 * x5) + (-2 * x2 * x2 * x2 * x4) +
      (-3 * x0 * x3 * x5 * x6) <= -17418564)
    {
      printf ("I am here at depth 6");
      if ((1 * x0 * x0 * x1 * x2 * x3 * x3 * x3 * x3 * x3 * x4) +
	  (9 * x1 * x2 * x2 * x4 * x4 * x4 * x4 * x4 * x4 * x4) +
	  (2 * x2 * x2 * x4 * x4 * x4 * x5 * x5 * x5 * x5 * x6) +
	  (-1 * x0 * x0 * x1 * x1 * x1 * x1 * x5 * x6 * x6 * x6) +
	  (2 * x0 * x0 * x0 * x1 * x2 * x2 * x2 * x2 * x3 * x7) +
	  (-1 * x3 * x3 * x3 * x4 * x4 * x5 * x5 * x5 * x5 * x7) +
	  (1 * x0 * x3 * x3 * x3 * x5 * x5 * x5 * x5 * x5 * x7) +
	  (1 * x3 * x3 * x3 * x3 * x3 * x3 * x4 * x5 * x6 * x7) +
	  (8 * x0 * x1 * x3 * x3 * x4 * x4 * x4 * x5 * x6 * x7) +
	  (-2 * x0 * x0 * x1 * x1 * x3 * x4 * x5 * x6 * x6 * x7) +
	  (-1 * x0 * x0 * x1 * x5 * x5 * x5 * x5 * x6 * x7 * x7) +
	  (1 * x0 * x0 * x0 * x0 * x3 * x4 * x4 * x7 * x7 * x7) +
	  (1 * x0 * x0 * x1 * x1 * x1 * x5 * x6 * x7 * x7 * x7) +
	  (-1 * x0 * x0 * x3 * x4 * x5 * x5 * x7 * x7 * x7 * x7) +
	  (4 * x1 * x2 * x4 * x6 * x6 * x6 * x7 * x7 * x7 * x7) +
	  (-1 * x1 * x1 * x3 * x3 * x3 * x3 * x3 * x4 * x4) +
	  (4 * x0 * x0 * x0 * x3 * x4 * x4 * x5 * x5 * x6) +
	  (-44 * x0 * x2 * x4 * x4 * x4 * x4 * x6 * x6 * x6) +
	  (1 * x0 * x1 * x1 * x1 * x1 * x2 * x3 * x3 * x7) +
	  (-6 * x1 * x1 * x1 * x4 * x4 * x5 * x6 * x7 * x7) +
	  (-2 * x0 * x0 * x4 * x4 * x4 * x7 * x7 * x7 * x7) +
	  (-2 * x0 * x0 * x0 * x0 * x1 * x2 * x4 * x5) +
	  (-1 * x1 * x1 * x1 * x1 * x1 * x4 * x4 * x6) +
	  (-6 * x0 * x1 * x2 * x5 * x5 * x5 * x5 * x6) +
	  (-2 * x2 * x2 * x2 * x2 * x3 * x6 * x7 * x7) +
	  (-1 * x0 * x0 * x0 * x1 * x3 * x5 * x5) +
	  (1 * x0 * x1 * x1 * x1 * x3 * x6 * x7) +
	  (1 * x0 * x3 * x5 * x5 * x6 * x7 * x7) +
	  (-3 * x0 * x0 * x3 * x6 * x6 * x7 * x7) +
	  (-1 * x3 * x3 * x4 * x4 * x5 * x5) +
	  (2 * x3 * x3 * x3 * x3 * x7 * x7) + (-1 * x1 * x4 * x4 * x5) >
	  -180826091)
	{
	  printf ("I am here at depth 5");
	  if ((5 * x0 * x0 * x1 * x1 * x1 * x1 * x1 * x2 * x4 * x6) +
	      (16 * x0 * x0 * x1 * x2 * x3 * x4 * x4 * x4 * x4 * x6) +
	      (1 * x0 * x0 * x0 * x0 * x3 * x4 * x4 * x5 * x5 * x6) +
	      (1 * x0 * x0 * x1 * x1 * x3 * x5 * x5 * x5 * x5 * x6) +
	      (1 * x2 * x2 * x3 * x4 * x4 * x4 * x5 * x6 * x6 * x6) +
	      (-1 * x2 * x3 * x4 * x4 * x4 * x5 * x5 * x6 * x6 * x6) +
	      (-1 * x0 * x1 * x1 * x2 * x2 * x3 * x6 * x6 * x6 * x6) +
	      (1 * x0 * x0 * x0 * x1 * x3 * x3 * x5 * x5 * x5 * x7) +
	      (-4 * x0 * x0 * x1 * x1 * x1 * x4 * x5 * x5 * x6 * x7) +
	      (-2 * x0 * x0 * x3 * x3 * x3 * x3 * x3 * x6 * x6 * x7) +
	      (1 * x1 * x2 * x3 * x3 * x3 * x4 * x4 * x6 * x6 * x7) +
	      (-3 * x0 * x0 * x0 * x1 * x2 * x2 * x5 * x6 * x6 * x7) +
	      (17 * x2 * x3 * x3 * x5 * x5 * x6 * x6 * x6 * x6 * x7) +
	      (-15 * x1 * x1 * x1 * x1 * x5 * x5 * x5 * x6 * x7 * x7) +
	      (4 * x0 * x1 * x1 * x1 * x3 * x3 * x5 * x7 * x7 * x7) +
	      (2 * x0 * x2 * x3 * x3 * x6 * x6 * x7 * x7 * x7 * x7) +
	      (-7 * x0 * x0 * x0 * x0 * x1 * x1 * x2 * x2 * x5) +
	      (1 * x0 * x2 * x3 * x4 * x4 * x4 * x4 * x5 * x5) +
	      (10 * x0 * x0 * x0 * x0 * x0 * x3 * x3 * x4 * x6) +
	      (-1 * x2 * x4 * x4 * x4 * x5 * x5 * x5 * x6 * x6) +
	      (-6 * x0 * x0 * x0 * x2 * x3 * x6 * x6 * x6 * x6) +
	      (-1 * x2 * x3 * x3 * x3 * x3 * x5 * x5 * x6 * x7) +
	      (2 * x0 * x1 * x4 * x4 * x4 * x4 * x4 * x7 * x7) +
	      (1 * x0 * x0 * x5 * x7 * x7 * x7 * x7 * x7 * x7) +
	      (-1 * x1 * x3 * x3 * x5 * x5 * x5 * x5 * x5) +
	      (-15 * x1 * x1 * x2 * x3 * x3 * x3 * x5 * x6) +
	      (1 * x1 * x3 * x3 * x4 * x4 * x4 * x6 * x6) +
	      (-1 * x0 * x0 * x0 * x3 * x3 * x5 * x5 * x7) +
	      (-1 * x0 * x0 * x0 * x1 * x2 * x2 * x7 * x7) +
	      (1 * x1 * x2 * x3 * x3 * x5 * x6 * x7 * x7) +
	      (-14 * x1 * x2 * x2 * x2 * x6 * x6 * x7 * x7) +
	      (1 * x0 * x0 * x0 * x2 * x3 * x3 * x5) +
	      (1 * x0 * x1 * x3 * x3 * x4 * x5 * x5) +
	      (6 * x1 * x4 * x5 * x5 * x5 * x5) +
	      (-1 * x2 * x4 * x4 * x4 * x6 * x6) +
	      (1 * x2 * x5 * x6 * x6 * x6 * x7) + (1 * x1 * x5 * x5) >=
	      -41759870)
	    {
	      printf ("I am here at depth 4");
	      if ((1 * x2 * x2 * x3 * x4 * x4 * x4 * x4 * x4 * x5 * x5) +
		  (16 * x0 * x1 * x1 * x1 * x3 * x4 * x4 * x4 * x4 * x6) +
		  (-2 * x3 * x4 * x4 * x4 * x4 * x5 * x5 * x6 * x6 * x6) +
		  (-1 * x3 * x3 * x3 * x3 * x3 * x4 * x4 * x5 * x5 * x7) +
		  (5 * x1 * x1 * x2 * x2 * x4 * x5 * x5 * x6 * x6 * x7) +
		  (6 * x0 * x0 * x1 * x3 * x3 * x4 * x6 * x6 * x6 * x7) +
		  (2 * x2 * x2 * x2 * x3 * x3 * x3 * x3 * x6 * x7 * x7) +
		  (-1 * x1 * x1 * x3 * x3 * x4 * x4 * x6 * x6 * x7 * x7) +
		  (-3 * x0 * x2 * x3 * x3 * x3 * x5 * x6 * x6 * x7 * x7) +
		  (1 * x0 * x0 * x3 * x4 * x6 * x6 * x6 * x6 * x7 * x7) +
		  (-6 * x0 * x1 * x1 * x1 * x1 * x1 * x5 * x7 * x7 * x7) +
		  (-1 * x1 * x1 * x3 * x3 * x3 * x3 * x6 * x7 * x7 * x7) +
		  (2 * x1 * x1 * x2 * x2 * x2 * x6 * x6 * x7 * x7 * x7) +
		  (-1 * x3 * x3 * x6 * x6 * x7 * x7 * x7 * x7 * x7 * x7) +
		  (2 * x0 * x1 * x1 * x3 * x3 * x4 * x5 * x5 * x5) +
		  (-33 * x1 * x4 * x4 * x4 * x4 * x5 * x5 * x6 * x6) +
		  (-1 * x1 * x1 * x3 * x3 * x3 * x3 * x3 * x3 * x7) +
		  (2 * x0 * x0 * x2 * x2 * x5 * x5 * x5 * x5 * x7) +
		  (-2 * x0 * x2 * x2 * x2 * x5 * x5 * x5 * x5) +
		  (-6 * x3 * x4 * x4 * x6 * x6 * x6 * x6) +
		  (10 * x0 * x2 * x2 * x2 * x3 * x5 * x7) +
		  (4 * x0 * x0 * x2 * x3 * x4 * x5 * x7) +
		  (-91 * x1 * x4 * x5) <= 82948641)
		{
		  printf ("I am here at depth 3");
		  if ((1 * x0 * x1 * x1 * x1 * x1 * x1 * x1 * x1 * x1 * x4) +
		      (-1 * x0 * x0 * x0 * x0 * x0 * x0 * x2 * x4 * x4 * x4) +
		      (-1 * x0 * x0 * x2 * x2 * x4 * x4 * x4 * x4 * x5 * x5) +
		      (12 * x0 * x0 * x1 * x2 * x4 * x4 * x5 * x5 * x5 * x5) +
		      (2 * x1 * x1 * x3 * x4 * x4 * x4 * x5 * x5 * x5 * x5) +
		      (1 * x1 * x1 * x3 * x3 * x3 * x5 * x5 * x5 * x5 * x5) +
		      (1 * x0 * x2 * x2 * x2 * x4 * x5 * x5 * x5 * x5 * x5) +
		      (1 * x1 * x1 * x1 * x1 * x1 * x2 * x2 * x5 * x5 * x6) +
		      (-2 * x1 * x3 * x3 * x4 * x4 * x4 * x6 * x6 * x6 * x6) +
		      (-2 * x2 * x2 * x3 * x3 * x3 * x5 * x6 * x6 * x6 * x6) +
		      (-2 * x0 * x1 * x2 * x2 * x2 * x2 * x3 * x3 * x3 * x7) +
		      (-1 * x0 * x1 * x1 * x3 * x4 * x4 * x4 * x4 * x5 * x7) +
		      (-1 * x4 * x4 * x4 * x4 * x5 * x5 * x6 * x7 * x7 * x7) +
		      (-2 * x1 * x1 * x1 * x3 * x6 * x7 * x7 * x7 * x7 * x7) +
		      (1 * x4 * x5 * x5 * x7 * x7 * x7 * x7 * x7 * x7 * x7) +
		      (-1 * x0 * x0 * x0 * x1 * x1 * x3 * x3 * x4 * x6) +
		      (-1 * x2 * x4 * x4 * x4 * x4 * x4 * x4 * x6 * x6) +
		      (1 * x0 * x0 * x1 * x2 * x2 * x3 * x5 * x6 * x6) +
		      (1 * x3 * x3 * x6 * x6 * x6 * x6 * x6 * x6 * x6) +
		      (-3 * x0 * x0 * x0 * x0 * x1 * x3 * x3 * x3 * x7) +
		      (-1 * x0 * x2 * x3 * x3 * x3 * x4 * x4 * x5 * x7) +
		      (-1 * x0 * x0 * x0 * x1 * x1 * x3 * x6 * x7 * x7) +
		      (1 * x1 * x4 * x4 * x6 * x6 * x6 * x6 * x7 * x7) +
		      (-1 * x1 * x1 * x1 * x1 * x7 * x7 * x7 * x7 * x7) +
		      (-1 * x0 * x0 * x2 * x4 * x4 * x4 * x5 * x5) +
		      (1 * x0 * x3 * x4 * x4 * x5 * x5 * x5 * x7) +
		      (-6 * x1 * x1 * x2 * x3 * x5 * x7 * x7 * x7) +
		      (1 * x3 * x3 * x4 * x5 * x5 * x6 * x6) +
		      (-2 * x0 * x0 * x1 * x5 * x6 * x6 * x6) +
		      (7 * x2 * x5 * x5 * x5 * x6 * x7 * x7) > 208634516)
		    {
		      printf ("I am here at depth 2");
		      if ((-4 * x0 * x0 * x1 * x1 * x1 * x2 * x3 * x4 * x4 *
			   x4) +
			  (1 * x0 * x0 * x0 * x0 * x0 * x1 * x1 * x1 * x3 *
			   x5) +
			  (-1 * x0 * x0 * x1 * x2 * x2 * x2 * x3 * x4 * x4 *
			   x5) +
			  (1 * x0 * x0 * x0 * x4 * x4 * x4 * x4 * x4 * x5 *
			   x5) +
			  (7 * x0 * x0 * x1 * x1 * x1 * x1 * x3 * x5 * x5 *
			   x5) +
			  (-1 * x0 * x0 * x0 * x0 * x0 * x2 * x5 * x5 * x5 *
			   x5) +
			  (-2 * x0 * x0 * x2 * x2 * x2 * x2 * x2 * x2 * x3 *
			   x6) +
			  (-1 * x0 * x0 * x0 * x1 * x2 * x4 * x4 * x4 * x5 *
			   x6) +
			  (2 * x1 * x3 * x3 * x3 * x4 * x5 * x5 * x5 * x5 *
			   x6) +
			  (-2 * x0 * x0 * x2 * x3 * x5 * x5 * x5 * x5 * x5 *
			   x6) +
			  (-2 * x0 * x1 * x1 * x1 * x2 * x2 * x3 * x5 * x6 *
			   x6) +
			  (11 * x2 * x2 * x2 * x5 * x5 * x5 * x5 * x6 * x6 *
			   x6) +
			  (5 * x1 * x2 * x4 * x4 * x4 * x4 * x4 * x4 * x5 *
			   x7) +
			  (-2 * x2 * x3 * x3 * x3 * x3 * x3 * x4 * x5 * x5 *
			   x7) +
			  (-1 * x0 * x0 * x2 * x3 * x3 * x4 * x5 * x5 * x7 *
			   x7) +
			  (-1 * x0 * x0 * x3 * x3 * x5 * x5 * x6 * x7 * x7 *
			   x7) +
			  (1 * x0 * x2 * x2 * x2 * x2 * x2 * x7 * x7 * x7 *
			   x7) +
			  (-1 * x0 * x0 * x3 * x3 * x6 * x7 * x7 * x7 * x7 *
			   x7) +
			  (-4 * x0 * x0 * x6 * x7 * x7 * x7 * x7 * x7 * x7 *
			   x7) +
			  (-3 * x0 * x0 * x1 * x1 * x1 * x2 * x3 * x3 * x6) +
			  (2 * x2 * x3 * x3 * x4 * x5 * x5 * x5 * x6 * x6) +
			  (-1 * x0 * x0 * x0 * x1 * x1 * x4 * x6 * x6 * x6) +
			  (-1 * x2 * x5 * x5 * x5 * x6 * x6 * x6 * x7 * x7) +
			  (142 * x1 * x2 * x2 * x3 * x5 * x5 * x7 * x7 * x7) +
			  (104 * x1 * x1 * x1 * x2 * x2 * x2 * x4 * x4) +
			  (-2 * x0 * x1 * x1 * x1 * x1 * x2 * x4 * x6) +
			  (1 * x1 * x1 * x1 * x2 * x3 * x4 * x5 * x6) +
			  (9 * x1 * x2 * x3 * x4 * x6 * x6 * x6 * x6) +
			  (1 * x0 * x2 * x2 * x3 * x5 * x6 * x7 * x7) +
			  (2 * x0 * x2 * x2 * x6 * x7 * x7 * x7 * x7) +
			  (1 * x1 * x2 * x3 * x3 * x5 * x6 * x6) +
			  (1 * x0 * x2 * x2 * x2 * x4 * x5 * x7) +
			  (5 * x0 * x2 * x5 * x5 * x7) +
			  (2 * x3 * x3 * x3 * x6 * x7) +
			  (-1 * x1 * x2 * x6 * x6 * x7) + (4 * x0 * x2 * x3) <
			  2132997843)
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
