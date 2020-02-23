/* Gex1-10.c */
/* Good Exercise 1-10 */
/* Taken from 
 * https://github.com/TylerBrock/books/blob/master/The%20C%20Programming%20Langu * age/ex1-10.c */
/* Copies input to output replacing each tab by \t, each backspaces by \b, and each backslash by \\ */

#include <stdio.h>

int main(void)
{
	int c;
	int prev;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			printf("\\t");
			c = EOF;
		}
		if (c =='\b')
		{
			printf("\\b");
			c = EOF;
		}
		if (c == '\\')
		{
			printf("\\//");
			c = EOF;
		}
		if (c != EOF)
			putchar(c);
	}
	return 0;
}
