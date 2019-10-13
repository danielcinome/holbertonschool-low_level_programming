#include <stdio.h>
#include <stdlib.h>

/**
* main - program adds positive numbers.
* @argc : t argumento
* @argv : vector de argumento
* Return: val 0
*/
int main(int argc, char *argv[])
{
	int res = 0, c, c2;

	if (argc >= 1)
	{
		for (c = 1 ; c < argc ; c++)
		{
			for (c2 = 0; argv[c][c2] != '\0' ; c2++)
			{
				if (argv[c][c2] < '0' || argv[c][c2] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			res += (atoi(argv[c]));
		}
		printf("%d\n", res);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
