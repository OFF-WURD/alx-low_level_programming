#include "main.h"
/**
*main - Entry point
*
* Description - a function that print all alphabet in lower case
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
