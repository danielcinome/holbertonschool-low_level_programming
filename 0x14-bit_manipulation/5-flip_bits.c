#include "holberton.h"

/**
* flip_bits - bits you would need to flip to get from one nm to another.
* @n : number
* @m : number
* Return: number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val = 0;
	unsigned int cont = 0;

	val = n ^ m;
	while (val)
	{
		cont += val & 1;
		val = val >> 1;
	}
	return (cont);
}
