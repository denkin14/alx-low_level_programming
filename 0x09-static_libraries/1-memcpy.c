#include "main.h"

/**
*_memcpy - The _memcpy() function copies n bytes
* from memory src to memory dest
*@dest: where bytes are copied to
*@src: where bytes are copied from
*@n: number of bytes to be copied
*Return: returns a pointer to n
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
