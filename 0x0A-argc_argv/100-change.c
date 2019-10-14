#include <stdio.h>
#include <stdlib.h>
/**
* main - change for an amount of money.
* @argc : t argumento
* @argv : vector de argumento
* Return: val 0
*/
int main(int argc, char *argv[])
{
	int c;
	int mul = 0,  val = 0, t = 0;

	if (argc >= 2)
	{
		for (c = 1 ; c < argc ; c++)
		{
			if ((atoi(argv[c])) > 0)
			{
				val = (atoi(argv[c]));
				if (val / 25 || val % 25 == 0)
				{
					mul = (val / 25);
					t = t + mul;
					val = val - (25 * mul);
				}
				if (val / 10 || val % 10 == 0)
				{
					mul = (val / 10);
					t = t + mul;
					val = val - (10 * mul);
				}
				if (val / 5 || val % 5 == 0)
				{
					mul = (val / 5);
					t = t + mul;
					val = val - (5 * mul);
				}
				if (val / 2 || val % 2 == 0)
				{
					mul = (val / 2);
					t = t + mul;
					val = val - (2 * mul);
				}
				if (val / 1 || val % 1 == 0)
				{
					mul = (val / 1);
					t = t + mul;
					val = val - mul;
				}
			printf("%d\n", t);
			}
			else
			{
				printf("0\n");
				return (0);
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
