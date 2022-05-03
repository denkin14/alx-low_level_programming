#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a char in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: ointer to first occurrence of character
 * c in the string s, or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
