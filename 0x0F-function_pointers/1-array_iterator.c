#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function to execute function given as parameter
 * @array: our array of elements
 * @size: the size of array
 * @action: the function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int d;

	if (array && size > 0 && action)
	{
		for (d = 0; d < size; d++)
		{
			action(array[d]);
		}
	}
}
