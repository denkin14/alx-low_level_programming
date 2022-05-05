#include "main.h"
#include <stdlib.h>
/**
 * _strdup - will return a pointer to newly allocated space in memory.
 * @str: The string.
 *
 * Return: The pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int d, k;

	if (str == NULL)
		return (NULL);

	for (d = 0; str[d] != '\0'; d++)
		;

	strout = (char *)malloc(sizeof(char) * (d + 1));

	if (strout == NULL)
		return (NULL);

	for (k = 0; k <= d; k++)
		strout[k] = str[k];

	return (strout);
}
