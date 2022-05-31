#include "main.h"

/**
 * print_binary -will print binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int d, counter = 0;
	unsigned long int origin;

	for (d = 63; d >= 0; d--)
	{
		origin = n >> d;

		if (origin & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
