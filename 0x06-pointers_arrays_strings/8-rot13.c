#include "holberton.h"

/**
* rot13 - funtion using rot13
* @n : pointer
* Return: val
*/

char *rot13(char *n)
{
	char al[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char rt[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int i = 0;
	int a = 0;

	while (n[i] != '\0')
	{
	a = 0;
		while (al[a] != '\0')
		{
			if (n[i] == al[a])
			{
				n[i] = rt[a];
				break;
			}

			a++;
		}
	i++;
	}
	return (n);
}
