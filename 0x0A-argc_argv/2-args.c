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
	int c = 0;

	for (; c < argc ; c++)
	{
	printf("%s\n", argv[c]);
	}

	return (0);
}

