#include <stdio.h>

#define LOWER  0     /* lower limit of table */
#define UPPER  300   /* upper limit of table */
#define STEP   20    /* step size */

/* print Fahrenheit - Celsius table using a for loop */
int main()
{
	int fahr;

	/* prints in chronological order */
	/* for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%5d %10.1f\n", fahr, (5.0/9.0)*(fahr - 32)); */

	/* prints in reverse order */
	for (fahr = UPPER; LOWER <= fahr; fahr = fahr - STEP)
		printf("%5d %10.1f\n", fahr, (5.0/9.0) * (fahr -32));

}
