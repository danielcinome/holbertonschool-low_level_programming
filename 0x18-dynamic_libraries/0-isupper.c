#include "holberton.h"

/**
* _isupper- checks for uppercase character
* @c : variable value
* Return: 0 if 'a' || 1 if 'A'.
*/

int _isupper(int c)
{
	int val = 0;

	if (c >= 65 && c <= 90)
		val = 1;
	if (c >= 97 && c <= 122)
		val = 0;
	return (val);
}
