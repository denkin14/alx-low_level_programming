#include "main.h"

/**
 *_puts - function that prints a string
 * @str: string to be print
 *
 * Description: print a string
 * On success: return the no of char printed
 */

void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
