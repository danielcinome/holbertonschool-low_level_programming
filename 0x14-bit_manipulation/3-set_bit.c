#include "holberton.h"

/**
* set_bit - sets the value of a bit to 1 at a given index.
* @n : number
* @index : starting from 0 of the bit you want to set
* Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (*n == '\0' && *n > 64)
		return (-1);

	while (*n)
	{
		*n = *n | (1 << index);
		n++;
	}

	return (1);
}
