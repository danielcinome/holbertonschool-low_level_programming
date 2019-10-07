#include "holberton.h"

/**
* *_strpbrk - searches a string for any of a set of bytes.
* @s : pointer
* @accept : pointer
* Return: s
*/

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s != '\0')
	{
		while (accept[a] != '\0')
		{
			if (*s == accept[a])
			break;
			a++;
		}
	if (*s == accept[a])
	break;
	a = 0;
	s++;
	}
	if (*s == '\0')
	s = s + 1;
	return (s);
}
