#include "main.h"

/**
 * puts_half - print every other characeter of a string
 * @str: pointer to int being changed
 *
 * Return: void meaning correct answer
 */

void puts_half(char *str)
{
	int i, last;

	i = 0;
	while ( str[i] != '\0')
	{
		i++
	}

	last = (i + 1) / 2;

	for (i = last; str[i]; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n')
}
