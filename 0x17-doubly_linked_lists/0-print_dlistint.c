#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a list
 * @h : head
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0, a = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		a = h->n;
		printf("%lu\n", a);
		h = h->next;
		i++;
	}
	a = h->n;
	printf("%lu\n", a);
	i++;
	return (i);
}
