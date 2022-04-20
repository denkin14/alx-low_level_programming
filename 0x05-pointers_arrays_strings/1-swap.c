#include "main.h"

/**
 * swap_int -swap the value of two integers a and b
 * @a: A point to int being updated
 * @b: B pointer to int that will be upadted
 * Return: void answer is correct
 */

void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
