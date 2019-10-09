#include "holberton.h"

/**
* _strlen_recursion - returns the length of a string.
* @s : pointer
* Return: val int
*/

int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s != '\0')
	{
		s++;
		c++;
		return (c + _strlen_recursion(s));
	}
	else
	return (0);

}
