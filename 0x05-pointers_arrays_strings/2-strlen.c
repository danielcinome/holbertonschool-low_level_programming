#include "holberton.h"

/**
* _strlen - returns the length of a string.
* @s : pointers
* Return : value.
*/

int _strlen(char *s)
{
	int val = 0;

	while(*s != 0)
	{
		val++;
		s++;
	}
	return (val);
}
