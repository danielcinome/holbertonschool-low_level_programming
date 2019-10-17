#include <stdlib.h>
#include "holberton.h"

/**
* *array_range - function that creates an array of integers
* @min : values
* @max : values
* Return: if fails FULL / else if pointer
*/

int *array_range(int min, int max)
{
	int *d, val = 0, i;

	val = max - min + 1;
	d = malloc(sizeof(int) * val);
	if (d == NULL)
		return (NULL);
	for (i = 0 ; i <= val ; i++)
	{
		d[i] = min + i;
	}
	return (d);
}
