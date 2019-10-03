#include "holberton.h"

/**
* reverse_array - reverses the content of an array 
* @a: pointer
* @n: val
*/

void reverse_array(int *a, int n)
{
	int temp = 0;
	int f = 0;
	
	for (f = n - 1 ; f > (n / 2) ; f--)
	{
		temp = a[f];
		a[f] = a[n - f];
		a[n - f] = temp;
	}
}
