#include <stdio.h>

/**
 * main - main block
 * Description: print all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
int d = 0;
while (d < 10)
{
putchar(48 + d)
if (d != 9)
{
putchar(',');
putchar(' ');
}
d++;
}
putchar('\n');
return (0);
}
