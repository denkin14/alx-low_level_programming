#include "main.h"

/**
 * *_strncpy - function copies a string
 * @dest: pointer destination
 * @src: pointer source
 * @n: bytes from src
 * return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
