#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: input integer array.
 * @size: the size of the array.
 * @cmp: pointer to the function being used
 * to compare values.
 *
 * Return: index of the first element for which the cmp
 * function does not return 0. If elements dont match,
 * return -1. If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int d;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (d = 0; d < size; d++)
			if (cmp(array[d]))
				return (d);
	}

	return (-1);
}
