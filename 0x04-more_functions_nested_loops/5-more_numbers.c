#include "holberton.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14.
*/

void more_numbers(void)
{
	int num0;
	int num1;
	int lim = 14;
	int cal = 0;

	for (num0 = 0 ; num0 <= 9 ; num0++)
	{
		for (num1 = 0 ; num1 <= lim ; num1++)
		{
			if (num1 >= 10)
				cal = num1 / 10;
			if (num1 >= 10)
				_putchar ('0' + cal);
			 cal = num1 % 10;
                        _putchar ('0' + cal);
		}
		_putchar('\n');
	}
}
