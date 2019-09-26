#include "holberton.h"

/**
* _isdigit -  function that checks for a digit (0 through 9).
* @c : Variable value if it is digit Variable value if it is digit or something else.
* Return: 1 if it is digit || 0 ifi it is something
*/
int _isdigit(int c)
{
	int val = 0;

	if (c >= 48 && c <= 57)
		val = 1;
	else 
		val = 0;
	return (val);
}
