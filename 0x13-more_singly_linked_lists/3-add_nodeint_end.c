#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - function that adds a new node at the end of a list.
* @head : pointer to head
* @n : intger
* Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *aux;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	aux = *head;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (aux->next != NULL)
			aux = aux->next;

		aux->next = new;
	}

	return (new);
}
