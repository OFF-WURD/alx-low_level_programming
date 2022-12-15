#include "main.h"
/**
*_islower - check if an alphabet is in lowercase
*
*parameter or member 'c' - any letter pass in for check
*
*return value of '_islower' - 0 (uppercase) 1(lowercase);
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
	return (1);
else
	return (0);
}
