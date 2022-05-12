#include <unistd.h>

/**
 * _putchar - will write character c to stdout
 * @c: The character to be printed
 *
 * Return: On Success 1.
 * if error -1 and set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
