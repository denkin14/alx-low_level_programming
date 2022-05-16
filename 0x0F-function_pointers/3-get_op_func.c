#include "3-calc.h"

/**
  *get_op_func - this function will select the correct function to perform.
  *@s: will use this operator.
  *
  *Return: correct function or Null when operator is wrong.
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
	int d;

	d = 0;
	while (d < 5)
	{
		if (s[0] == ops[d].op[0])
		{
			return (ops[d].f);
		}
		d++;
	}
	return (NULL);
}
