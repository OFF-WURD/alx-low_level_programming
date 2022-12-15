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
	char ch;

	print_alphabet();

	for (ch = 'a'; ch < 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');

	return (0);
}
