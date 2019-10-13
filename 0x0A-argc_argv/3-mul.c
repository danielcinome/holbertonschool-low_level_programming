#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the number of arguments passed into it.
* @argc : t argumento
* @argv : vector de argumento
* Return: val 0
*/
int main(int argc, char *argv[])
{
	int res;

	if (argc >= 2)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
