#include "main.h"
/**
* print_alphabet - print all alphabet in lowercase
*
* Return - 0 always (Success)
*/

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');

}
