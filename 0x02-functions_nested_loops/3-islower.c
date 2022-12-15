#include "main.h"
/**
*function_islower - check if an alphabet is in lowercase
*
*c - any value pass in for check
*
*value of '_islower'
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
