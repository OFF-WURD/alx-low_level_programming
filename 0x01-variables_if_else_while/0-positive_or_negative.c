#include <stdio.h>
#include <time.h>
#include <stdlib>
/**
*headers goes here
*
* main: Entry point
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/ *my code start here */
	if(n > 0)
		printf("is positive\n");
	elseif(n == 0)
		printf("is zero\n");
	else
		printf("is negative\n");
	returnn (0);
}
