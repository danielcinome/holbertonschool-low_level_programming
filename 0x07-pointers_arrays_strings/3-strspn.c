#include "holberton.h"

/**
* _strspn - gets the length of a prefix substring.
* @s : pointer
* @accept : pointer
* Return: number of bytes in the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b = 0, c = 0;

	while (s[b] != '\0')
	{
		if (s[b] == ',')
		break;
		while (s[b] == accept[c])
		{
			c++;
			if (s[b] == accept[c])
			a++;
		}
		a++;
		b++;
	}
	return (a);
}
