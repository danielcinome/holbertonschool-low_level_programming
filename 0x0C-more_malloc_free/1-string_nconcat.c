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
	unsigned int  i = 0, j = 0, c = 0;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	j++;
	if (n >= j)
		n = j;
	c = i + n;
	d = malloc(sizeof(char) * (c + 1));
	if (d == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0'; i++)
	{
		d[i] = s1[i];
	}
	for (j = 0 ; s2[j] != s2[n] ; j++)
	{
		d[i] = s2[j];
		i++;
	}
	d[i] = '\0';
	return (d);
}
