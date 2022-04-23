#include "main.h"
/*
 * _strcat - function to concatenate two strings
 * @dest: will be pointer destination
 * @src: will be pointer source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int d, m;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}

	m = 0;
	while (src[m] != '\0')
	{
		dest[d] = src[m];
		d++;
		m++;
	}
	dest[d] = '\0';

	return (dest);
}
