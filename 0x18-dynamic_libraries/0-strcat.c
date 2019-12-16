#include "holberton.h"

/**
* *_strcat - function that concatenates two strings
* @dest : pointer
* @src : pointer
* Return: val dest
*/

char *_strcat(char *dest, char *src)
{
	char *pos;

	pos = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *dest + *src;
		src++;
		dest++;
	}
	*dest = '\0';
	dest = pos;
	return (dest);
}
