#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print no 0 to 9 on new line
 * i
 * Return: 0
 */
int main(void)
{
int d;

for (d = 0; d <= 9; ++d)
putchar('0' + d);

putchar('\n');

return (0);
}	
