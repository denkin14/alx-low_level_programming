#include "main.h"

/**
 * get_bit - will return value of a bit at an index in a decimal number
 * @n: number to search
 * @index: the index of the bit
 *
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mybit_val;

	if (index > 63)
		return (-1);

	mybit_val = (n >> index) & 1;

	return (mybit_val);
}
