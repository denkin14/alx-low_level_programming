#include "main.h"
/**
 * string_toupper - function to change all lowercase letters to uppercase
 * @str: the string
 * Return: str
 */

char *string_toupper(char *)
{
	int d = 0;

	while (str[d] != '\0')
	{
		if (str[d] > 96 && str[d] < 123)
		{
			str[d] -= 32;
		}
		d++;
	}

	return (str);
}
