#include "holberton.h"

/**
* *string_toupper - changes
* @n: pointer
* Return: val
*/

char *string_toupper(char *n)
{
	int c = 0;


	while (n[c] != '\0')
	{
		if (n[c] >= 97 && n[c] <= 122)
			n[c] = n[c] - 32;
	c++;
	}
	return (n);
}
