#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer to an int being changed
 *
 * Return: void so answer is correct
 */

void _puts(char *str)
{
	char *c;
	int d;

	c = str;

	for (d = 0; c[d]; d++)
	{
		_putchar (c[d]);
	}
	_putchar('\n');
}
