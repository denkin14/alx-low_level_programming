#include "main.h"

/**
 *_strncat - concatenate two strings and adds inpuued no of bytes
 *@dest: string to append
 *@src: string to be completed
 *@n: our integer params to compare index to
 *Return: 0 (success)
 */

char *_strncat(char *dest, char *src, int n)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
