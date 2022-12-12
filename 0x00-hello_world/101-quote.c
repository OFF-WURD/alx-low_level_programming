#include <unistd.h>
/**
*main-Entry point
*
*ssize_t write(int fd, const void *buf, size_t count);
*
*Return: 1 an error occur
*/

int main(void)
{
	char quote[] = "and that piece of art is useful\" -Doral Korpal, 2015-10-19\n";
	write(1, quote, 60);
	return(1);
}
