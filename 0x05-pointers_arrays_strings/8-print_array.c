#include "holberton.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array.
* @a : pointer.
* @n : variable.
*/

void print_array(int *a, int n)
{
	int val = 0;
	int c = 0;

	while (c < n)
	{
	val = *a;
	printf ("%d", val);
	if (c < n - 1)
	printf (",");
	printf (" ");
	a++;
	c++;
	}
	printf ("\n");
}
