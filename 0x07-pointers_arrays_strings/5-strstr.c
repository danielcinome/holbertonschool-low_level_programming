#include "holberton.h"

/**
* *_strstr - function that locates a substring.
* @haystack: pointer
* @needle: pointer
* Return: val
*/

char *_strstr(char *haystack, char *needle)
{
	int b = 0;
	char *temp;

	while (*haystack != '\0')
	{
		if (needle[b] == *haystack)
		{
			temp = haystack;
			while (needle[b] == *haystack)
			{
				if (needle[b] == '\0')
				{
					return (temp);
				}
				else
				{
					b++;
					haystack++;
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
