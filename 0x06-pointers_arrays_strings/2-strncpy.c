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
	int f = 0;

	while (f < n && src[f] != '\0')
	{
		dest[f] = src[f];
		f++;
	}
	while (f < n)
	{
	dest[f] = '\0';
	f++;
	}
	return (dest);
}
