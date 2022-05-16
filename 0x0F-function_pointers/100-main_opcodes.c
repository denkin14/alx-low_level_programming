#include <stdio.h>
#include <stdlib.h>
/**
 * main - will print opcodes of its own main function.
 * @argc: the number of arguments
 * @argv: our arguments array
 * Return: 0
 */
int main(int argc, char **argv)
{
	int s, panda;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	panda = atoi(argv[1]);
	if (panda < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (s = 0; s < (panda - 1); s++)
	{
		if (panda != 0)
			printf("%02hhx ", ((char *)main)[s]);
	}
	printf("%02hhx\n", ((char *)main)[s]);
	return (0);
}
