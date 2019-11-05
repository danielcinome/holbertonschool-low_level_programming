#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list.
* @head :
* Return: pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *sig = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		sig = head->next;
		prev->next = pre;
		head = head->next;
		if (head->next != NULL)
			head = head->next;
	}

	return (*head);
}
