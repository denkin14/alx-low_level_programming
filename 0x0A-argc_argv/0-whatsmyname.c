#include <stdio.h>

/**
 * main - my function
 * @argc: number of command line arguments
 * @argv: array where command line arguments are contained
 *
 * Return: 0 (success).
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0)
}
