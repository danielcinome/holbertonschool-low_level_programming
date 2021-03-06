#include <stdio.h>
#include "lists.h"

/**
* print_listint - function that prints all the elements of a listint_t list.
* @h : points to the node
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cont++;
	}

	return (cont);
}
