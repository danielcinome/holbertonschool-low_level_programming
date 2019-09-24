#include "holberton.h"

/**
 * print_sign - check the code for Holberton School students.
 * @n: return the sign of a number.
 * Return: +, 1 || 0, 0 || +, 1 || - , -1 (/).
 */
int print_sign(int n)
{
	int val = 0;

	if (n > 48)
	{
	_putchar('+');
	_putchar(',');
	_putchar(' ');
	val = 1;
	}
	else if (n == 0)
	{
	_putchar('0');
	_putchar(',');
	_putchar(' ');
	val = 0;
	}
	else
	{
	_putchar('-');
	_putchar(',');
	_putchar(' ');
	val = 1;
	}
	return (val);
}
