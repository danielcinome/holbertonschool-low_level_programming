#include "holberton.h"

/**
* get_bit - value of a bit at a given index.
* @index : starting from 0 of the bit you want to get
* @n : number
* Return:value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n == '\0' && n > n)
		return (-1);
	while (i != index)
	{
		n = n >> 1;
		i++;
	}
	if (n & 1)
	return (1);
	else
	return (0);
}
