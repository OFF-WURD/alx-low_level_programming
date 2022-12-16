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
		while (i < 0)
		{
			_putchar((i / 60) + '0');
			_putchar(':');
			_putchar(
