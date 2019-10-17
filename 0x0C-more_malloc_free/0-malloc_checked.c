#include <stdlib.h>
#include "holberton.h"

/**
* *malloc_checked - function that allocates memory using malloc
* @b : value in
* Return: pointer to the allocate memory if fails, shuold`:W
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *d;

	d = malloc(sizeof(d) * b);

	if (d == NULL)
		exit(98);

	return ((void *) d);
}
