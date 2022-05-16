#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - will  get an operation
 * @s: the operator
 * Return: No return
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int d = 0;

	while (ops[d].op)
	{
		if (strcmp(s, ops[d].op) == 0)
		{
			return (ops[d].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
