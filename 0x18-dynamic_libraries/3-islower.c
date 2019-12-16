#include "holberton.h"
#include <ctype.h>

/**
 * _islower -  int c check the code for Holberton School students.
 * @c: variable return value.
 * Return: 1 || 0.
 */
int _islower(int c)
{
	int a = 0;

	if (c > 97)
	{
	a = 1;
	}
	else
	{
	a = 0;
	}
	return (a);
}
