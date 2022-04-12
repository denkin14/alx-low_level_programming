#include "main.h"

/** 
 * print_alphabetx10 - Print ten time the alphabet in lowercase  
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
