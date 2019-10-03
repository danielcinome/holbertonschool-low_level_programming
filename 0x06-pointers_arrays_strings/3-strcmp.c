#include "holberton.h"

/**
* _strcmp - function that compares two strings.
* @s1: pointer
* @s2: pointer
* Return: val
*/
int _strcmp(char *s1, char *s2)
{
	int c = 0;
	int valr = 0;

	while ((s1[c] != '\0' && s2[c] != '\0') && s1[c] == s2[c])
	{
		c++;
	}
	if (s1[c] == s2[c])
	{
		valr = 0;
	}
	else
	{
		valr = s1[c] - s2[c];
	}
	return (valr);

}
