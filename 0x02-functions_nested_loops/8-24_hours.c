#include "holberton.h"
/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int n0 = 0;
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;

	for (n0 = 0 ; n0 <= 2 ; n0++)
	{
		for (n1 = 0 ; n1 <= 3 ; n1++)
		{
			for (n2 = 0 ; n2 <= 5 ; n2++)
			{
				for (n3 = 0 ; n3 <= 9 ; n3++)
				{
				_putchar ('0' + n0);
				_putchar ('0' + n1);
				_putchar (':');
				_putchar ('0' + n2);
				_putchar ('0' + n3);
				_putchar ('\n');
				}
			}
		}
	}
}
