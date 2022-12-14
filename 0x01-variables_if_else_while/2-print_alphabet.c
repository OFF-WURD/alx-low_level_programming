#include <stdio.h>
/**
* main - Entry point
*
* Description - printing all alphabet in lowercase
*
* Return: 0 always (Success)
*/

int main(void)
{
	char alp = 'a';
	
	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	
	return (0);
}
