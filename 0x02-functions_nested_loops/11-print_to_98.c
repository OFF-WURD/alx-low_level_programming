#include "main.h"
/**
*98 - print any number and end it with 98
*/
void print_to_98(int n)
{
int i, j;

if (n <= 98)
{
for (i = n; i <= 98; ++i)
{
if (i != 98)
{
printf("%d,\n", i);
}
else if ( i == 98)
{
printf("%d, \n", i);
}
}
}
