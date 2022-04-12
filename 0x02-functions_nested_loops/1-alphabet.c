#include <stdio.h>
#include "main.h"

/**
 * print_alphabet- function that prints alphabets in lower case
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char dennis;

for (dennis = 'a'; dennis <= 'z'; dennis++)
_putchar(dennis);

_putchar('\n');
}
