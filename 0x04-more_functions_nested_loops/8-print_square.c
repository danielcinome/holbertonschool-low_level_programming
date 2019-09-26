#include "holberton.h"

/**
* print_square -  prints a square.
* @size : value.
*/

void print_square(int size)
{
	int val;
	int val1;

	if (size > 0)
	for (val = 1 ; val <= size ; val++)
	{
		for (val1 = 1 ; val1 <= size ; val1++)
		{
		_putchar(35);
		if (val1 == size)
		_putchar ('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
