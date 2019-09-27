#include "holberton.h"

/**
* print_triangle -  function that prints a triangle.
* @size : value.
*/

void print_triangle(int size)
{
	int val1;
	int val2;
	int x = 0;
	int y = 0;

	x = size;
	if (size > 0)
	{
		for (val1 = 1 ; val1 <= x ; val1++)
		{
		if (val1 != x)
		_putchar(' ');
		y++;

			for (val2 = 1 ; val2 <= y; val2++)
			{
			_putchar(35);
			}
		_putchar('\n');
		}
	y = 0;
	}
	else
	{
	_putchar('\n');
	}
}
