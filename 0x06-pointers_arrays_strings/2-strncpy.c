#include "main.h"

/**
 * _strncpy - copies two strings
 * @dest : pointer to char parameters
 * @src : pointer to char parameters
 * @n : int parameter
 * Return: *dest
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
