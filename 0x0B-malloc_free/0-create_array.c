#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* *create_array - function that creates an array of chars
* @size : size
* @c : Variable
* Return: Val char
*/

char *create_array(unsigned int size, char c)
{
	char *val;
	unsigned int i;

	val = malloc(sizeof(*val) * size);

	if (val == 0 || val == NULL)
		return ('\0');

	for (i = 0 ; i < size ; i++)
	{
		val[i] = c;
	}

	return (val);
}
