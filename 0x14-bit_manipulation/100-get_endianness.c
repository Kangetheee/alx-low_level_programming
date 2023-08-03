#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * unsigned int i is initialized to 1
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
