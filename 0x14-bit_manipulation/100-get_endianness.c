#include "main.h"

/**
 * get_endianness - fuction checks if machine is little
 * or big endian
 *
 * Return : 0 for big, 1 for little
 */

int get_endianness(void)
{
	unsigned int d = 1;
	char *c = (char *)&d;

	return (*c);
}
