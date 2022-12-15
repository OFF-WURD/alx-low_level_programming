#include"main.h"
/**
* main - Entry point
*
* Description - a function that will print _putchar
*
* Return: 0 always (Success)
*/
int main(void)
{
	char str[] = "_putchar";
	int cha;

	for(cha = 0; cha < 8; cha++)
		_putchar(str[cha]);
	_putchar('\n');

	return (0);
}
