#include "holberton.h"

/**
* *_strcpy - string pointed to by src.
* @dest : pointer
* @src : pointyer
* Return: 0
*/

char *_strcpy(char *dest, char *src)
{
	char *val;

	val = dest;
	while (*src != '\0')
	{
		*dest = *src;
		*dest++ = *src++;
	}
	return (val);
}
