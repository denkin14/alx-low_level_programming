#include "main.h"
/**
 * _strcat - function to concatenate two strings
 * @dest: pointer returned here
 * @src: source
 * Return: to dest
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
		dest [d] = src[m];
	}
	dest[d] = '\0';

	return (dest);
}
