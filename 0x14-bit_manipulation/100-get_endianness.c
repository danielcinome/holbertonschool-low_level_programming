#include "holberton.h"

/**
* get_endianness - checks the endianness.
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	unsigned int val = 1;
	char *i = (char *)&val;

	if (*i)
		return (1);
	return (0);
}
