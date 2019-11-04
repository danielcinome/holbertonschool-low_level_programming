#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - function that deletes the head node of a listint_t linked list
* @head : pointer
* Return: head node’s data (n), if the linked list is empty return 0.
*/

int pop_listint(listint_t **head)
{
	int val_n = 0;
	listint_t *aux;

	aux = *head;
	val_n = aux->n;
	*head = aux->next;
	free(aux);

	return (val_n);
}
