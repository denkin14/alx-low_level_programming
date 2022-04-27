include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: returns usigned values
 */
unsigned int _strspn(char *s, char *accept)
{
	int d;
	int j;
	unsigned int result = 0;

	for (d = 0; [d] != '\0'; d++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[d] == accept[j])
			{
				result++;
				break;
			}
		}
		if (s[j] == '\0')
			return (result);
	}
	return (result);
}
