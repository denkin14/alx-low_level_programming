#include "main.h"
/**
 * leet - function that encodes a string
 * @n: input
 * Return: 0 (success)
 */

char *leet(char *n)
{
	int d, k;
	int get[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int change[] = {'4', '3', '0', '7', '1'};

	for (d= 0; n[d] != '\0'; d++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (n[d] == get[k])
			{
				n[d] = change[k / 2];
			}
		}
	}
	return (n);
}
