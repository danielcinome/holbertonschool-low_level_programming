#include "holberton.h"

/**
* *_strncpy - function that copies a string.
* @dest: pointer
* @src: pointer
* @n: variable
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *pos;
	int f = 0;

	pos = dest;
	while (f != n)
	{
		*dest = *src;
		*dest++ = *src++;
		f++;
	}
	dest = pos;
	return (dest);
}
