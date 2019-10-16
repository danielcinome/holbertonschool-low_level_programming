#include <stdlib.h>
#include "holberton.h"

/**
* *argstostr - function that concatenates all the arguments of your program.
* @ac : argument of counter
* @av : argument of vector
* Return: pointer
*/

char *argstostr(int ac, char **av)
{
	int c, c1, a = 0;
	int str;
	char *d;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (c = 0 ; c < ac ; c++)
	{
		for (c1 = 0 ; av[c][c1] != '\0' ; c1++)
		{
			str++;
		}
	}


	d = malloc(sizeof(int) * str);

	if (d == NULL)
		return (NULL);

	for (c = 0 ; c < ac ; c++)
	{
		for (c1 = 0 ; c1 < av[c][c1] ; c1++)
		{
			d[a] = av[c][c1];
			a++;
		}
		d[a] = '\n';
		a++;
	}
	return (d);
}

