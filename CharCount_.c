#include <stdio.h>

/* program to count number of characters; 2nd version */
int main()
{
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}
