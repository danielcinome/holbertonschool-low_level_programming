#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	char digito;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digito = n % 10;
	/* your code goes there */
	if (n < 6 && n != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digito);
	}
	else if (n > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, digito);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, digito);
	}
	return (0);
}
