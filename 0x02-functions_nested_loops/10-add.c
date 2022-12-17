#include "main.h"
/**
* it add two number
*/
int add(int n1, int n2)
{
int p;

p = n1 + n2;
if (p < 0)
{
_putchar('-');
_putchar(p + '-');
}
else if (p >= 0 || p <= 9)
{
_putchar(p +'0');
}
else if (p >= 10)
{
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
}
return (p);
}
