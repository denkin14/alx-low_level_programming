#include "main.h"

/**
 * _strncpy - function copies a string
 * @dest: pointer destination
 * @src: pointer source
 * @n: bytes from src
 * return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int d;

	d = 0;
	while (d < n && src[d] != '\0')
	{
		dest[d] = src[d];
		d++;
	}

	while (d < n)
	{
		dest[d] = '\0';
		d++;
	}

	return (dest);
}
