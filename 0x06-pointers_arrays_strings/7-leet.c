#include "holberton.h"

/**
* *leet- function replace letter by number
* @n : pointer
* Return: val
*/

char *leet(char *n)
{
	char letter[] = {"aAeEoOtTlL"};
	char number[] = {"4433007711"};
	int i = 0;
	int il = 0;
	int in = 0;

	while (n[i] != '\0')
	{
		while (letter[il] != '\0')
		{
			if (n[i] == letter[il])
				n[i] = number[il];

				il++;
				in++;
		}
	i++;
	il = 0;
	in = 0;
	}
	return (n);
}
