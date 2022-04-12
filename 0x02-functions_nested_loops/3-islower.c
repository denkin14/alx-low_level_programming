#include "main.h"

/**
 * _islower - Check if a character is lowercase
 * @c the Character to be checked
 * Return: 1 if character is lowecase , 0 otherwise
 */
int _islower(int c)
{
if ( c >= 'a' && c <= 'z')
{
return (1);
}

else
{
return (0);
}
}
