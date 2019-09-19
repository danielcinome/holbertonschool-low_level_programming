#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char x;

	for (num = 48 ; num <= 57 ; num++)
	{
	putchar(num);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);
}
