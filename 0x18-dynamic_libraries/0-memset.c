#include "main.h"

/**
* _memset - The function fills first n bytes of meemory area
* pointed to by s with the constant byte b
* @s:target
* @b: constant byte
* @n:number of byte
* Return: returns new value of target
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
