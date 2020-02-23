/* FIXED */
/* Must type capital "F" at the end before pressing enter to display output */
/*----------------------------------------------------------------------------*/

#include <stdio.h>

/* counts blanks, tabs and newlines in a body of text */
int main()
{
	int c;
	int Blanks = 0;
	int Tabs = 0;
	int Newlines = 0;
	int done = 0;
	
	while (done == 0)
	{	
		c = getchar();

		/* counts blanks in input */
		if (c == ' ')
			++Blanks;

		/* counts tabs in input */
		if (c == '\t')
			++Tabs;

		/* counts lines in input */
		if (c == '\n')
			++Newlines;

		if (c == '')		/* outputs */
		{
			printf("\n");			/* places newline
							   between outputs */
			/* prints number of Blanks */
			printf("Blanks: %5d\n", Blanks);
			/* prints value of Tabs variable */
			printf("Tabs: %7d\n", Tabs);
			/* prints value of Newlines variable */
			printf("Newlines: %3d\n", Newlines);
			/* breaks loop to prevent multiple output sets */
			break;

			done = 1;
		}
	}	
}

/******OUTPUT******/

/*
Blanks:     0
Tabs:       0
Newlines:   0
*/
