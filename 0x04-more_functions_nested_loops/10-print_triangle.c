#include "holberton.h"

/**
* print_triangle -  function that prints a triangle.
* @size : value.
*/

void print_triangle(int size)
{
	int val1;
	int val2 = 1;
	int val3;


	if (size > 0)
	{
		for (val1 = 1 ; val1 <= size ; val1++)
		{
			for (val2 = size ; val2 > val1 ; val2--)
			{
			_putchar(' ');
			}
		for(val3 = 1 ; val3 <= val2 ; val3++)
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
