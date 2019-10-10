#include "holberton.h"

int raiz(int n, int p);

/**
* _sqrt_recursion - returns the natural square root of a number.
* @n : variable
* Return: int
*/

int _sqrt_recursion(int n)
{
	return (raiz(n, 1));
}

/**
* raiz - function
* @n : variable
* @p : variable
* Return: int
*/

int raiz(int n, int p)
{
	int r;

	r = p * p;

	if (r > n)
		return (-1);
	if (r == n)
		return (p);

	return (raiz(n, (p + 1)));
}
