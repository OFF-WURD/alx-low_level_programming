#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for functions main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf("is positive\n");
	}
	elseif(n == 0)
	{
		printf("is zero\n");
	}
	else(n < 0)
	{
		printf("is negative\n");
	}
	returnn (0);
}