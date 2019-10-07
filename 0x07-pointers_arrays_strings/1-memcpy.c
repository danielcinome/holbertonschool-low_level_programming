#include "holberton.h"

/**
* *_memcpy-  copies memory area.
* @dest : pointer
* @src : pointer
* @n : val
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
	{
		dest[a] = dest[a] + src[a];
	}
	return (dest);
}
