#include "holberton.h"

/**
* *_strstr - function that locates a substring.
* @haystack: pointer
* @needle: pointer
* Return: val
*/

char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;
	char *temp;

	while (haystack[a] != '\0')
	{
		if (needle[b] == haystack[a])
		{
			temp = haystack;
			while (needle[b] == haystack[a])
			{
				if (needle[b] == '\0')
				{
					return (temp);
				}
				else
				{
					b++;
					a++;
				}
			}
			haystack = temp;
		}
		else
		{

		}
			haystack++;
	}
	return (0);
}
