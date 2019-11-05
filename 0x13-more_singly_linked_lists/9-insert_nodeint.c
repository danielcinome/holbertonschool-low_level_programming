#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position.
* @head : point
* @idx : where the new node should be added. Index starts at 0.
* @n : integer
* Return: address of the new node, or NULL if it failed.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp, *ant;

	unsigned int i;

	temp = *head;
	for (i = 0 ; i < idx - 1 ; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	ant = temp->next;
	temp->next = new;
	new->n = n;
	new->next = ant;
	return (new);
}
