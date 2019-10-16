#include <stdlib.h>
#include "holberton.h"

/**
* **alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width : Variable of in
* @heigth : variable of in
* Return: failure - NULL /
*/

int **alloc_grid(int width, int height)
{
	int *d;
	int n, c1;

	if (width <= 0 || height <= 0)
		return (NULL);

	n = width * height;
	d = malloc(sizeof(int) * n);

	if (d == NULL)
		return (NULL);

	for (c1 = 0 ; c1 < height ; c1++)
	{
		d[c1] = d[c1] + 0;
	}
	c1 = 0;
	return (d);
}
