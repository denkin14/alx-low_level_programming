#include "main.h"
/**
 * cap_string - capitalize words in a string
 * @str: the string
 * Return: str
 */

char *cap_string(char *str)
{
	int d, m;
	int capital;
	char signs[] = ",;.!?(){}\n\t\"";

	for (d = 0, capital = 0; str[d] != '\0'; d++)
	{
		if (str[0] > 96 && str [0] <123)
		capital = 1;
		for (m = 0; signs[m] != '\0'; m++)
		{
			if (signs[m] == str [d])
				capital = 1;
		}

		if (capital)
		{
			if (str[d] > 96 && str[d] < 123)
			{
				str[d] -= 32;
				capital = 0;
			}
			else if (str[d] > 64 && str[d] < 91)
				capital = 0;
			else if (str[d] > 47 && str[d] < 58)
				capital = 0;
		}
	}
	return (str);
}
