#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char min;
	char may;

	for (min = 'a'; min <= 'z'; min++)
	{
	putchar(min);
	}
	for (may = 'A'; may <= 'Z'; may++)
	{
	putchar(may);
	}
	putchar('\n');
	return (0);
}
