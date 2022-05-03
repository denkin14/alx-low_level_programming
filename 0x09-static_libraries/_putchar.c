#include <unistd.h>
/**
 * _putchar - will write char c to stdout
 * @c: Char to be printed
 *
 * Return: success 1.
 * if error, -1 to be returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
