#include "holberton.h"

/**
* *_strncat - function
* @ dets : pointer.
* @ src : pointer.
* @ n : val most bytes
* Return: value
*/

char *_strncat(char *dest, char *src, int n)
{
	char *pos;
	int val;

	pos = dest;
	while (*dest != '\0')
	{
		dest++;
	}

	while (val != n)
	{
		*dest = * dest + *src;
		dest++;
		src++;
		val++;
	}
	dest = '\0';
	dest = pos;
	return (dest);
}
