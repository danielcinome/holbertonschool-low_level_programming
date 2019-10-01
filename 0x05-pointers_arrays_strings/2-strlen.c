#include "holberton.h"

/**
* _strlen - returns the length of a string.
* @s : pointers
* Return: val.
*/

int _strlen(char *s)
{
	int val = 0;

	while (*s != 0)
	{
		s++;
		val++;
	}
	return (val);
}
