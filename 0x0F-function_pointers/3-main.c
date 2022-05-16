#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - main function
 * @argc: no lines arguments
 * @argv: the array of elements
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int d;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	d = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", d);

	return (0);
}
