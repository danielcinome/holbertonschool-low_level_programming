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
	char *pos_d;
	char *pos_s;
	int f = 0;

	pos_d = dest;
	pos_s = src;
	while (f < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		f++;
	}
	while (*dest < n)
	{
	*dest = '\0';
	src++;
	dest++;
	}
	src = pos_s;
	dest = pos_d;
	return (dest);
}
