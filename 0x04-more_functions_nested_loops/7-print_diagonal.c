#include "holberton.h"

/**
* print_diagonal - function that draws a diagonal line on the terminal.
* @n : value.
*/

void print_diagonal(int n)
{
	int val;
	int space = 0;
	int val2;

	if (n > 0)
	{
		for (val = 1 ; val <= n ; val++)
		{
			_putchar (92);
			_putchar ('\n');
			space++;
			if (val != n)
			{
				for (val2 = 0 ; val2 < space ; val2++)
				{
					_putchar (' ');
				}
			}
			else
			{
			}
		}
	space = 0;
	}
	else
	{
	_putchar ('\n');
	}
}
