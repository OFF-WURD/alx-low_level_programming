#include "main.h"
/**
*int _islower(int c) - print is lower
*
* Return- 0 always (success);
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
	return (1);
else
	return(0);
}
