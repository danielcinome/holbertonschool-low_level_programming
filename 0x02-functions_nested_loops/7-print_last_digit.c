#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @j: number.
 * Return: value of j.
 */

int print_last_digit(int j)
{
	int x;

	x = j % 10;	

	if (x < 0)
		x = x * -1;

	_putchar('0' + x);
	return (x);
}
