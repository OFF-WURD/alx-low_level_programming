#include"main.h"
/**
*main - Entry point
*
* Description - a function that print all alphabet in lower case
*
* Return - 0 always (Success)
*/

int main(void)
{
	print_alphabet(char ch);

	for (ch = 'a'; ch < 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');

	return (0);
}
