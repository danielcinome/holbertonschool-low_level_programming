#include "holberton.h"

/**
 * _isalpha - check the code for Holberton School students.
 * @c: varable, return value a
 * Return: 0 || 1..
 */
int _isalpha(int c)
{
	int a = 0;

	if (c >= 65)
	{
	a = 1;
	}
	else
	{
	a = 0;
	}
	return (a);
}
