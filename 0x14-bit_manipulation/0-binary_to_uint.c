#include "holberton.h"

/**
* _strlen - returns the length of a string.
* @s : pointers
* Return: val.
*/

int _strlen(const char *s)
{
	int val = 0;

	while (*s != 0)
	{
		s++;
		val++;
	}
	return (val);
}

/**
* _pow_recursion - returns the value of x raised to the power of y.
* @x : variable
* @y : ^variable
* Return: res
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, (y - 1)));
}

/**
* binary_to_uint - converts a binary number to an unsigned int.
* @b : pointing to a string of 0 and 1 chars
* Return: converted number, or 0 if
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int str = 0, i, j = 0;

	if (b == '\0')
		return (0);

	str = _strlen(b);

	for (i = str - 1 ; i >= 0 ; i--)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			if (b[i] == '1')
				num = num + _pow_recursion(2, j);
		}
		else
		{
			num = 0;
			return (num);
		}
		j++;
	}
	return (num);
}

