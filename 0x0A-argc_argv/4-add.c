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
	int res = 0, c;

	if (argc >= 1)
	{
		for (c = 1 ; c < argc ; c++)
		{
			if (atoi(argv[c]))
			{
				if ((atoi(argv[c])) < 0)
				{
					printf("Error\n");
					return (1);
				}
				else
				{
				res += (atoi(argv[c]));
				}
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", res);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
