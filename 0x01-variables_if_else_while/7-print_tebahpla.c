#include <stdio.h>

/**
 * main -entry point
 *
 * Description: Print lowercase alphabets backwards
 * Return: 0
 * */
int main (void)
{
char d;

for (d = 'z'; d >= 'a'; --d)
putchar(d);

putchar('\n');

return (0);
}
