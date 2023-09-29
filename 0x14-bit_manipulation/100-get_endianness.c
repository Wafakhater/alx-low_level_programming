#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian succeded
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
