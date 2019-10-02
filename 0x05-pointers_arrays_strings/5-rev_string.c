#include "holberton.h"

/**
* rev_string - function that reverses a string.
* @s : pointer.
*/

void rev_string(char *s)
{
	char temp;
	int f = 0;
	int val;

	while (s[f] != 0)
	{
		f++;
	}
	f = f - 1;
	for (val = f ; val > (f / 2) ; val--)
	{
		temp = s[val];
		s[val] = s[f - val];
		s[f - val] = temp;
	}
}
