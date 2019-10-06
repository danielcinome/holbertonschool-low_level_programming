#include "holberton.h"

/**
* print_number - prints an integer.
* @n : variable.
*/

void print_number(int n)
{
	int mo = 0;
	int di = 0;

	if (n < 100)
	{
		mo = n  % 10;
		di = n / 10;
		di = n / 100;
		_putchar (di);
		di = n / 10;
		di = di % 10;
		_putchar ('0' + di);
		_putchar ('0' + mo);
	}
	else if (n > 100 && n < 1000)
	{
		mo = n / 100;
		_putchar ('0' + mo);
		mo = n / 10;
		mo = mo % 10;
		_putchar ('0' + mo);
		mo = n % 10;
		_putchar ('0' + mo);
	}
	else
	{
		mo = n / 1000;
		_putchar ('0' + mo);
		mo = mo / 100;
		_putchar ('0' + mo);
		mo = n / 10;
		mo = mo % 10;
		_putchar ('0' + mo);
		mo = n % 10;
		_putchar ('0' + mo);
	}
}
