#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
