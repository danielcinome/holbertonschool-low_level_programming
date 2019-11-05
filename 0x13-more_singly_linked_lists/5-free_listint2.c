#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - function that frees a listint_t list.
* @head : pointer
*/

void free_listint2(listint_t **head)
{
	listint_t *aux;

	while (*head)
	{
		aux = *head;
		*head = aux->next;
		free(aux);
	}
	free(*head);
	head = NULL;
}
