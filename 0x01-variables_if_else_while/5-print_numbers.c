#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print numbers 0 to 9 in one line
 * Return: 0
 */
int main(void)
{
char d;

for (d = '0'; d <= '9'; ++d)
putchar(d);

putchar('\n');

return (0);
}

