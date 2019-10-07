#include "holberton.h"

/**
* *_strchr - locates a character in a string.
* @s : pointer
* @c : val
* Return: s
*/

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		break;
		s++;
	}
	if (*s != c)
	s = s + 1;
	return (s);
}
