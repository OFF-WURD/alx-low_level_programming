#include "main.h"
/**
*print_alphabet_x10 - it print all alphabet in lower case 10x
*
*Return - 0 always(Success)
*/
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		count++;
	}
}
