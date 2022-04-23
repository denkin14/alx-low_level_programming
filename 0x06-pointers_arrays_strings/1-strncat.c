#include "main.h"
/**
 * _strncat - fuction to concatenate two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: bytes to be used from src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int d, m;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}

	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[d] = src[m];
		m++;
		d++;
	}
	dest[m] = '\0';
	
	return (dest);
}
