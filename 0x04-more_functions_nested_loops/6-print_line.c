#include "holberton.h"

/**
* print_line - function that draws a straight line.
* @n : value
*/

void print_line(int n)
{
	int val;

	if (n > 0)
	{
		for (val = 0 ; val < n ; val++)
		_putchar (95);
	}
	else
	{
	}
	_putchar ('\n');
}
