#include <stdio.h>
#include <ctype.h>
/**
* main - Fizz-Buzz test.
*/

int main(void)
{
	int val;

	for (val = 1 ; val <= 100 ; val++)
	{
	if (!(val % 3 == 0) && !(val % 5 == 0))
	printf("%d", val);
	if ((val % 3 == 0) && !(val % 5 == 0))
	printf("Fizz");
	if ((val % 5 == 0) && !(val % 3 == 0))
	printf("Buzz");
	if ((val % 5 == 0) && (val % 3 == 0))
	printf("FizzBuzz");
	}
	printf(" ");
	printf("\n");
	return (0);
}
