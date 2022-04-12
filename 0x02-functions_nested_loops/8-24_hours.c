#include "main.h"

/**
 * jack_bauer - Print every minute of the day
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int d;
int k;

for (d = 0; d <= 23; d++)
{
for (k =0; k <= 59; b++)
{	
_putchar (d / 10 + '0');
_putchar (d % 10 + '0');
_putchar (':');
_putchar (k / 10 + '0');
_putchar (k % 10 + '0');
_putchar ('\n');
}
}
}
