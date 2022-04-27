#include "main.h"
/**
 * _strpbrk - funtion to searche a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int d;
	int j;

	for (d = 0; s[d] != '\0'; d++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[d] == accept[j])
			{
				return (s + d);
			}
		}
	}
	return (0);
}
