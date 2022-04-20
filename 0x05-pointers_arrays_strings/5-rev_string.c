#include "main.h"

/**
 * rev_string - prints a reverse string
 * @s: pointer to an int being changed
 *
 * Return: void meaning is correct
 */

void rev_string(char *s)
{
	char *start_d, *end_d, d;
	int i, count;
	int length = 0;

	for (i = 0; s[i]; i++)
	{
		length++;
	}

	count = length;

	start_d = s;
	end_d = s;

	for (i = 0; i < count - 1; i++)
	{
		end_d++;
	}

	for (i = 0; i < count / 2; i++)
	{
	        d = *end_d;
		*end_d = *start_d;
		*start_d = d;

		start_d++;
		end_d--;
	}
}
