#include "main.h"

/**
 * Description: print_alphabet_x10 function uses _putchar fuction to print
 */
void print_alphabet_x10(void)
{
char dennis;
int kinyua;

for (kinyua = 0; kinyua < 10; kinyua++)
{
for (dennis = 'a'; dennis <= 'z'; dennis++)
_putchar(dennis);

_putchar('\n');
}
}
