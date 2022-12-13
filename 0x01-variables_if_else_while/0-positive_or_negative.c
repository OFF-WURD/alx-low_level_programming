#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*headers goes here
*
* main: Entry point
*
*Description: Display the type of n (positive, zero, negative)
*
*Return: 0 always(success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code start here */
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
