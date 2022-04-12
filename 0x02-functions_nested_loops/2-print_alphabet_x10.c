#include "main.h"

/** 
 * Description: print_alphabetx10 function uses _putchar fuction to print
 *
 * Return: 0 
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
