#include <stdio.h>
/**
* main - Entry point
*
* Return: always 0 (success)
*/
int main(void)
{
printf("size of a char:%2d byte(s)\n", sizeof(char));
printf("size of an int:%2d byte(s)\n", sizeof(int));
printf("size of a long int:%2d byte(s)\n", sizeof(long int));
printf("size of a long long int: %2d byte(s)\n", sizeof(double));
printf("size of a double:%2d byte(s)\n", sizeof(float));
return (0);
}
