#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the number of arguments passed into it.
* @argc : t argumento
* @argv : vector de argumento
* Return: val 0
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	int c = 0;

	for (; c < argc ; c++)
	{
	}

	c--;
	printf("%d\n", c);

	return (0);
}
