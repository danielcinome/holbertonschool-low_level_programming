#include <stdlib.h>
#include "holberton.h"

/**
* *string_nconcat - function that concates two strings
* @s1 : contain string
* @s2 : contain string
* @n : bytes
* Return: if function fails return NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *d;
	int i = 0, j = 0, a = 0, c = 0;
	unsigned int b = 0;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	while (s1[i] != '\0')
	{
		a++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
		b++;
	}
	b++;
	c = a + b;
	d = malloc(c);
	if (d == NULL)
		return (NULL);
	for (j = 0 ; s1[j] != '\0' ; j++)
	{
	d[j] = s1[j];
	}
	if (n >= b)
		for (i = 0 ; s2[i] != '\0' ; i++)
		{
			d[j] = s2[i];
			j++;
		}
	for (i = 0 ; s2[i] != s2[n] ; i++)
	{
		d[j] = s2[i];
		j++;
	}
	d[j] = '\0';
	return (d);
}
