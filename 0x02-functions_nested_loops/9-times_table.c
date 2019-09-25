#include "holberton.h"
/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int val;
	int inc;
	int n0 = 0;
	int res = 0;
	int dig1 = 0;
	int dig2 = 0;

	for (inc = 0 ; inc <= 9 ; inc++)
	{
	for (val = 0 ; val <= 9 ; val++)
	{
	res = val * n0;
	dig1 = res % 10;
	dig2 = res / 10;
	if (res < 10 && val != 0)
	_putchar(' ');
	if (val != 0)
	_putchar(' ');
	if (res > 9)
	_putchar('0' + dig2);
	_putchar('0' + dig1);
	if (val < 9)
	_putchar(',');
	}
	n0++;
	_putchar('\n');
	}
}
