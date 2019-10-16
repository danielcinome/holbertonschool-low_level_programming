#include <stdlib.h>
#include "holberton.h"

/**
* free_grid - funtion frees a 2 dimensional grid
* @grid : double pointer in
* @height : variable in
*/

void free_grid(int **grid, int height)
{
	int **d;
	int i, j;

	d = malloc(sizeof(int *) * height);

	for (i = 0 ; i < height ; i++)
	{
		d[i] = malloc(sizeof(int) * **grid);
		if (d[i] == NULL)
		{
			for (i = i ; i >= 0 ; i--)
			{
				free(d[i]);
			}
			free(d);
			}
		}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < **grid ; j++)
		{
			free(d[j]);
		}
			free(d[i]);
		}
			free(d);
}
