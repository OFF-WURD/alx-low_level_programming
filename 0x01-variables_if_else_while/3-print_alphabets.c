#include <stdio.h>
/**
* main - Entry point
*
* Description - print alphabet in lower case and upper case
*
*Return: 0 always(Success)
*/
int main(void)
{
	char ch = 'a';
	char cha = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (cha <= 'Z')
	{
		putchar(cha);
		cha++;
	}
	putchar('\n');
	return (0);
}
