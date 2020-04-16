#include "search_algos.h"

/**
* print -Function that print a array
* @array : is a pointer to the first element of the array to search
* @left : is a position left of a array
* @right : is a position right of a array
*/

void print(int *array, int left, int right)
{
	int i;

	printf("Searching in array:Searching in array: ");
	for (i = left ; i <= right ; i++)
	{
		if (i + 1 <= right)
			printf("%d, ", array[i]);
		else
			printf("%d", array[i]);
	}
	printf("\n");
}

/**
* binary_search - searches for a value in a sorted array of
* integers using the Binary search algorithm
* @array : is a pointer to the first element of the array to search
* @size : is the number of elements in array
* @value : is the value to search for
* Return: If value is not present in array or if array is NULL,
* your function must return -1
*/

int binary_search(int *array, size_t size, int value)
{
	int right = 0, left = 0, m = 0;


	if (array == NULL)
		return (-1);
	right = size - 1;
	left = 0;
	while (left <= right)
	{
		print(array, left, right);
		m = (right + left) / 2;
		if (array[m] < value)
			left = m + 1;
		else if (array[m] > value)
			right = m - 1;
		else
			return (m);
	}
	return (-1);
}
