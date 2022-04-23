#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: this is an array of integers
 * @n: no of elements of an array
 */

void reverse_array(int *a, int n)
{
	int d;
	int k;

	d = 0;
	n = n - 1;

	while (d < n)
	{
		k = a[d];
		a[d] = a[n];
		a[n] = k;
		d++;
		n--;
	}
}
