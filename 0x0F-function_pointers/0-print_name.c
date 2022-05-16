#include "function_pointers.h"

/**
 * print_name - Function prints a name
 * @name: imput name
 * @f: the fuction pointer
 *
 * Return: no return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
