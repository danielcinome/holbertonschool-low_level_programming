#include "holberton.h"

/**
* _puts - prints a string.
* @str : pointer
*/

void _puts(char *str)
{
	int val = 0;

	while (*str != 0)
	{
		val = *str;
		_putchar (val);
		str++;
	}
	_putchar ('\n');
}
