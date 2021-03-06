#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - delete the node at index index of a linked list.
* @index : is the index of the node that should be deleted. Index starts at 0
* @head : pointer
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *aux;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	temp = *head;
	for (i = 1 ; i < index ; i++)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}
	if (index > 0)
	{
		aux = temp;
		aux = aux->next;
		temp->next = aux->next;
		free(aux);
	}
	else
	{
		aux = temp;
		temp = aux->next;
		*head = temp;
		free(aux);
	}
		return (1);
}
