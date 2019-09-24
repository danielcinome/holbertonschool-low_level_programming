#include "holberton.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a number.
 * @j: number.
 * Return: Always 0.
 */
int print_last_digit(int j) 
{
	j = abs(j);
	j = j % 10;
	_putchar('0' + j);
	return (j);
}
