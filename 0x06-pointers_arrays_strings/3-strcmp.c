#include "main.h"

/**
 * _strcmp.c - function to compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if equals or d if is different
 */

int _strcmp(char *s1, char *s2)
{
	int m = 0;
	int d = 0;

	while (s1[m] != '\0' && d == 0)
	{
		d = s1[m] - s2[m];
		m++;
	}
	return (d);
}
