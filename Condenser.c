/* Solution to EX 1-9 */
/* press enter to copy text and exit program */
/* at the moment a "%" is output at the end but otherwise it works perfectly */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c = 0;
	int done = 0;
	int d = 0;

	while (done == 0)
	{
		c = getchar();	/* set character to c */

		if (c == ' ')	/* check if character is \s */
			if (d == ' ')
			{
				d = 0;	/* set character to nothing */
			}

/*
		if (d == '%')
			d = 0;
*/
		putchar(d);	/* paste contents of c in file */

		d = c;
		if (c == '\n')	/* stops at end of line */
			break;

	}
	done = 1;
	exit(0);
}
