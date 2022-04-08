#include <stdio.h>
/**
 * main- entry point
 *
 * Description - Print lowercase alphabets
 * Return: 0
 * /
int main(void)
{
int d;

for (d = 0; d < 26; ++d)
putchar('a' + d);

putchar('\n');

return (0);
}

