#include "holberton.h"

/**
* puts2 - prints every other character of a string.
* @str : pointer.
*/

void puts2(char *str)
{
	int val;
	int i = 0;

	while (str[i] != 0)
	{
		i++;
	}
	for (val = 0 ; val < i ; val++)
	{
		if (val % 2 == 0)
			_putchar (str[val]);
	}
	_putchar ('\n');
}
