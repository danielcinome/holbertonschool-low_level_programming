#include "holberton.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a number.
 * @j: number.
 * Return: value of j.
 */
int print_last_digit(int j)
{
	int x = 0;

	j = abs(j);
	x = j % 10;
	_putchar('0' + x);
	return (x);
}
