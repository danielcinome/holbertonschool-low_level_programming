#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - function that returns the nth node of a linked list.
* @head : pointer
* @index : number of node
* Return: n of node or NULL if it failed
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
	unsigned int cont;

	for (cont = 0; cont <= index ; cont++)
	{
		if (head == NULL)
			return (NULL);

		aux = head;
		head = head->next;
	}

	return (aux);
}
