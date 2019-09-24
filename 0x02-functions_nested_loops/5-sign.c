#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 48)
	{
	_putchar('+');
	_putchar(',');
	_putchar(' ');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
        _putchar(',');
        _putchar(' ');
        return (0);
	}
	else
	{
	_putchar('-');
        _putchar(',');
        _putchar(' ');
        return (1);
	}
}
