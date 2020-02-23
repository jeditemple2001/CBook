/* Solution to EX 1-10 */
/* copies text replacing: tab='\t', backspace='\b', backslash='\\' */
/* press enter to copy text (replacing chosen characters) and exit program */
/* need to change the outputs to "\t", "\b", "\\" */

/* FAILED */

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
		{
			if (d == ' ')
			{
				d = 0;	/* set character to nothing */
			}
		}
		if (c == '\t')	/* tests for tab character */
			c = '|';

		if (c == '\b')	/* doesn't work as backspaces are not stored */
			c = '?';

		if (c == '\\')	/* tests for backslash character */
			c = '+';

		putchar(d);	/* paste contents of d in file */

		d = c;	/* moves to the next character */
		if (c == '\n')	/* stops at end of line */
			break;	/* exits loop */

	}
	done = 1;
	printf("\n");	/* prints newline to prevent an inverted "%" */
	exit(0);
}
