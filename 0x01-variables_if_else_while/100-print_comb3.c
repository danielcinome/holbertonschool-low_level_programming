#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int num2;

	for (num = 48 ; num <= 57 ; num++)
	for (num2 = 48 ; num2 <= 57 ; num2++)
	{
	if (num != num2 && num2 >= num)
	{
	putchar(num);
	putchar(num2);
	if (num != 56 || num2 != 57)
	{
	putchar(',');
	putchar(' ');
	}
	else
	{
	}
	}
	else
	{
	}
	}
	putchar('\n');
	return (0);
}
