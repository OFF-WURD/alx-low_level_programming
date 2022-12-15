#include "main.h"
/**
*_islower - check if an alphabet is in lowercase
*
*@c - any letter pass in for check
*
* Return- 0 always (success);
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
	return (1);
else
	return (0);
}
