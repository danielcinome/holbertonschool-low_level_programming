#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - function
* @a : pointer
* @size : size
*/

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum = 0;
	int sum2 = 0;

	for (i = 0 ; i < (size * size) ; i++)
	{
		for (j = 0 ; j <= (size - 1) ; j++)
		{
			if (i == j)
				sum = sum + *a;
			if (i + j == (size - 1))
				sum2 = sum2 + *a;

			a++;
		}
	}
		printf("%d, %d\n", sum, sum2);
}
