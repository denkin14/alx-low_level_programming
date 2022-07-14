#include "main.h"

/**
* _isupper - This function verifies if character is uppercase or not
* @c: char to be tested
* Return: returns 1 if it is uppercase , 0 if not
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
