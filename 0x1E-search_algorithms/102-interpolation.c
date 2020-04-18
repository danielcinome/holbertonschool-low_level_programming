#include "search_algos.h"

/**
* interpolation_search - searches for a value in a sorted array of integers
* @array :  array
* @size : size of array
* @value : s the value to search for
* Return: f value is not present in array or if array is NULL,
* your function must return -1
*/

int interpolation_search(int *array, size_t size, int value)
{
	int left = 0;
	int high = size - 1;
	int m;

	while ((array[high] != array[left]) && (
		value >= array[left]) && (value <= array[high]))
	{
		m = left + (((double)(high - left) / (
			array[high] - array[left])) * (value - array[left]));
		printf("Value checked array[%d] = [%d]\n", m, array[m]);
		if (array[m] < value)
			left = m + 1;
		else if (value < array[m])
			high = m - 1;
		else
			return (m);
	}

	if (value == array[left])
	{
		return (left);
	}
	else
	{
		printf("Value checked array[%d] is out of range\n", m);
	}
	return (-1);
}
