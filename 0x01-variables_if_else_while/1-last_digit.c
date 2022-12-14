#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Entry point
*
* Description - printing if the last digit of a number is greater than 5 and less than 6 but is not zero
*
* Return: always 0(Success)
*/
int main(void)
{
	int n;

	scrand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code start here */
	digit = n % 10; /* get the last digit */
	if (digit > 5)
		printf("Last digit of %i is %i  greater than 5\n", n, digit);
