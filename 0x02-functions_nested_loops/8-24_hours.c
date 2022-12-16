#include "main.h"
/**                                                                                                                                                    
* jack_bauer - it print time from 0 to 23:59                                                                                                           
*                                                                                                                                                      
* Return : 0 always (success)                                                                                                                          
*/ 
void jack_bauer(void)
{
	int j = 0;
	int i = 0;

	while (j < 24)
	{
		while (i < 60)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(':');
			_putchar((i / 10) + '0');
			_putchar(( i % 10) + '0');
			_putchar('\n');
			++i;
			++j;
		}
	}
}
