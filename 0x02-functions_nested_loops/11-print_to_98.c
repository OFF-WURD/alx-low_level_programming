#include "main.h"
/**
* print_to_98 - print all natural number and end it with 98
* follow by a new line
* @n: int to return
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
else if (i == 98)
{
printf("%d,\n", i);
}
}
}
else if (n >= 98)  
{
for (j = n; j >= 98; --j)
{
if (j != 98)
{
print("%d,\n", i);
}
else if (j == 98)
{
print("%d,\n", j);
}
}
}
} 
