#include "holberton.h"

/**
* print_triangle -  function that prints a triangle.
* @size : value.
*/

void print_triangle(int size)
{
	int val;
	int val1;

	if (size > 0)
	{
	for (val = 0 ; val < size ; val++)
	{
		_putchar(' ');
		for (val1 = 0 ; val1 < size ; val1++)
		{
		_putchar(35);
		}
		_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
