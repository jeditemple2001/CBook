#include <stdio.h>

/* program to print the value of EOF */
int main()
{
	int c;


	if ((c = getchar()) != EOF)	
		printf("%d\n", c);
}
