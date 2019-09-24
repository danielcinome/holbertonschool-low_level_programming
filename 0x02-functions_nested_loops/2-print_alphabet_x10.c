#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int v = 0;

	while (v < 10)
	{
		char alph;

		for (alph = 'a' ; alph <= 'z'; alph++)
		{
		_putchar(alph);
		}
	v++;
	_putchar('\n');
	}
}
