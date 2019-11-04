#include <stdio.h>
#include "lists.h"

/**
* listint_len - function that returns the number of elements in a linked list.
* @h : point to the nodo
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		cont++;
		h = h->next;
	}

	return (cont);
}
