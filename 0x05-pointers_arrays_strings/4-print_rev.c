#include "holberton.h"

/**
* print_rev - prints a string, in reverse.
* @s : Pointer.
*/

void print_rev(char *s)
{
	char val;
	char *dir;

	dir = s;
	while (*s != 0)
	{
		val = *s;
		s++;
	}
	while (s != dir)
	{
		s--;
		val = *s;
		_putchar (val);
	}
	_putchar ('\n');
}
