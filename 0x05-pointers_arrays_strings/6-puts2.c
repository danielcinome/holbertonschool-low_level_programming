#include "holberton.h"

/**
* puts2 - prints every other character of a string.
* @str : pointer.
*/

void puts2(char *str)
{
	char val;
	int i = 0;

	val = *str;
	while (val != 0)
	{
		val = str[i];
		_putchar (val);
		i++;
		i++;
	}
	_putchar ('\n');
}
