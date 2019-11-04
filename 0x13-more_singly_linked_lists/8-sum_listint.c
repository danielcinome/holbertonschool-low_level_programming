#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* sum_listint - function that returns the sum of all the data (n) of a list.
* @head : pointer
* Return: if the list is empty, return 0
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
