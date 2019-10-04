#include "holberton.h"

/**
* *cap_string - function that capitalizes all words of a string.
* @n: pointer
* Return: val
*/

char *cap_string(char *n)
{
	int c = 0;

	while (n[c] != 0)
	{
		if (n[c] == '\t')
			n[c] = 32;

		if ((n[c] >= 32 && n[c] <= 47) || (n[c] >= 58 && n[c] <= 64) 
		|| (n[c] >= 123 && n[c] <= 126) || (n[c] == '\n'))
		{
			c++;

			if (n[c] >= 97 && n[c] <= 122)
			{
				n[c] = n[c] - 32;
			}
			else
			{
			}
		}
		else
		{
			c++;
		}
	}
	return (n);
}
