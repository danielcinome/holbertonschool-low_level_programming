#include "holberton.h"

/**
* *_memset - function fills memory with a constant byte.
* @s : pointer.
* @b : constant.
* @n : bytes.
* Return : pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a; 

	for (a = 0 ; a < n ; a++)
	{
		s[a] = b;
	}
	return (s);
}
