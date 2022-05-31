#include "main.h"

/**
 * flip_bits - function counts the number of bits to change
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int d, counter = 0;
	unsigned long int origin;
	unsigned long int last = n ^ m;

	for (d = 63; d >= 0; d--)
	{
		origin = last >> d;
		if (origin & 1)
			counter++;
	}

	return (counter);
}
