#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* list_len - function that returns the number of elements in a linked
* @h : pointer
* Return: the number of elements in a linked
*/

size_t list_len(const list_t *h)
{
	size_t cont;

	while (h->next != NULL)
	{
		h = h->next;
		cont++;
	}
	cont++;
	return (cont);
}
