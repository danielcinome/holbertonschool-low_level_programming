#include "holberton.h"

/**
* con - funtion cont
* @num : number
* Return: counter
*/

int con(int num)
{
	int cont  = 0;

	while (num)
	{
	cont += num & 1;
	num >>= 1;
	}
	return (cont);
}

/**
* flip_bits - bits you would need to flip to get from one nm to another.
* @n : number
* @m : number
* Return: number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int val = 0;

	if (n == '\0' || m == '\0')
		return (-1);
	val = con(n ^ m);
	return (val);
}
