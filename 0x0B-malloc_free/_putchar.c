#include <unistd.h>

/**
 * _putchar - Will write the character c to stdout
 * @c: The charecter being printed
 *
 * Return: 1
 * on error, -1 will be returned, and errno will be set approprately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}	
