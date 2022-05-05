#include "main.h"
/**
 *create_array - array that prints a string
 *@size: The number elements array
 *@c: character
 *Return: the pointer
 */

char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int position;

if (size == 0)
{
return (NULL);
}

/*here we are Defining values with malloc*/
buffer = (char *) malloc(size * sizeof(c));

if (buffer == 0)
{
return (NULL);
}

else
{
position = 0;
while (position < size) /*While for array*/
{
*(buffer + position) = c;
position++;
}

return (buffer);
}

}
