#include <stdio.h>
/**
* main - Entry point
*
* Description - print all alphabet except q and e
*
* Return: 0 always(Success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
