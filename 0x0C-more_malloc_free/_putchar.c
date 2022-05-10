#include <unistd.h>

/**
 * _putchar - will write char s to stdout
 * @c: Char to Print
 *
 * Return: 0 (success)
 * error, -1 will be returned, and errno set appropritely.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
