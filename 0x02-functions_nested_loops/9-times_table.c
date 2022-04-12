#include "main.h"
/**
 * time_table - print 9 times table
 *
 * Return: Always 0
 */
void times_table(void)
{
int d;
int m;
int k;

for(d = 0; d <= 9; d++)
{
for(m = 0; m <= 9; m++)
{
if (m == 0)
{
_putchar ('0');
}
if (m != 0)
{
_putchar (' ');
_putchar ((k % 10) + '0');
}
if (m < 9)
{
_putchar (',');
_putchar (' ');
}
}
else
{
_putchar ((k /10) + '0');
_putchar ((k % 10) + '0');
}
if (m < 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar ('\n');
}
}
