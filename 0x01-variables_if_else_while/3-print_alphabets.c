#include <stdio.h>

/**
 * main -entry point
 *
 * Description: Print lower and upper aphabet on the same line
 * Return: 0
 */
int main(void)
{
int d;

for(d = 0; d < 26; ++d)
putchar('a' + d);
for(d = 0; d < 26; ++d)
putchar('A' + d);

putchar('\n');

return (0);
}
