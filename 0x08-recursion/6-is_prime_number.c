#include "holberton.h"

int prime(int n, int m);

/**
* is_prime_number - name function
* @n : variable
* Return: int
*/

int is_prime_number(int n)
{
	return (prime(n, 1));
}

/**
* prime - funtion
* @n : variable
* @m : variable
* Return: val
*/

int prime(int n, int m)
{
	int c = 0;

	if (n % m == 0)
		c++;

	if (c <= 2)
		return (1);

	if (c > 2)
		return (0);

	return (prime(n, (m + 1)));
}
