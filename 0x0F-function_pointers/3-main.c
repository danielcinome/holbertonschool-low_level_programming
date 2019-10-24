#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - program that performs simple operations.
* @argc : counter argument
* @argv : vector argument
* Return: diferent val depend de condition
*/

int main(int argc, char *argv[])
{
	char sig[] = {'+', '-', '*', '/', '%'};
	int i = 0, j = 0, a = 0, b = 0, val = 0;

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0 ; argv[2][i] != '\0' ; i++)
	{
		for (j = 0 ; sig[j] != '\0' ; j++)
		{
			if (argv[2][i] == sig[j])
				break;
		}
		if (j == 5 || i > 0)
		{
			printf("Error\n");
			exit(99);
		}
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((j == 3 && b == 0) || (j == 4 && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	val = get_op_func(argv[2])(a, b);
	printf("%d\n", val);

	return (0);
}
