#include "main.h"
/**
 * argstostr - will print args
 * @ac: will take in width of grid
 * @av: The height of grid
 * Return: args one line at a time
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int alx = 0, a = 0, b = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < ac)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			alx++;
			b++;
		}
		a++;
	}
	alx = alx + ac + 1;
	str = malloc(sizeof(char) * alx);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
