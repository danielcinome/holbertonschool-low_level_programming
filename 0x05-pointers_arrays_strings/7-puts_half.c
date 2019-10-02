#include "holberton.h"

/**
* puts_half - prints half of a string
* @str : pointer
*/

void puts_half(char *str)
{
	int val;
	int c;

	while (str[c] != 0)
	{
		c++;
	}
	if (c % 2 == 0)
	{
		val = c / 2;
	}
	else
	{
		val = (c / 2) + 1;
	}
	for (; val < c ; val++)
	{
		_putchar (str[val]);
	}
	_putchar ('\n');
}
