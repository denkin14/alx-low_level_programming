#include "main.h"
#include <stdio.h>

/**
 * print_buffer - functuion tomprint buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int d, m, k;

	d = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (d < size)
	{
		m = size - d < 10 ? size - d : 10;
		printf("%08x: ", d);
		for (k = 0; k < 10; k++)
		{
			if (k < m)
				printf("%02x", *(b + d +k));
			else
				printf(" ");
			if (k % 2)
			{
				printf(" ");
			}
		}

		for (k = 0; k < m; k++)
		{
			int c = *(b + d + k);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		d += 10;
	}
}

