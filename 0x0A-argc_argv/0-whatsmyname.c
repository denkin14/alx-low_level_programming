#include <stdio.h>

/**
 * main - will Print number of arguments passed to it.
 * @argc: number of arguments sent to program.
 * @argv: array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
