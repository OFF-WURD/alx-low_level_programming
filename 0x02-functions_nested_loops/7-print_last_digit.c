#include "main.h"
/**
* print_last_digit - it print the last digit of a number
* @n: integer to be tested
* Return: it return the last digit
* formula: it uses modulus of 10
*/
int print_last_digit(int n)
{
	int j;

	if (n < 0)
	{
		n = -n;
	}
	if (j < 0)
	{
		j = -n;
		j = n % 10;
	}
return (j);
}
