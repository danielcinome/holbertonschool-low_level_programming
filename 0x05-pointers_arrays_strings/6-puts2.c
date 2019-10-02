#include "holberton.h"

/**
* puts2 - prints every other character of a string.
* @str : pointer.
*/

void puts2(char *str)
{
	char val;

	while (*str != 0)
	{
		val = *str;
		if (val % 2 == 0)
			_putchar (val);
			str++;
	}
	_putchar ('\n');
}
