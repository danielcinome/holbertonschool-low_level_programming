#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked
 * @h : head
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}

/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h : head
* @idx : index of the list where the new node should be added
* @n : number
* Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp;
	unsigned int i;
	size_t num_node = 0;

	if (h == NULL || (*h == NULL && idx != 0))
		return (NULL);

	temp = *h;
	if (idx == 0 || *h == NULL)
	{
		*h = add_dnodeint(&temp, n);
		return (*h);
	}
	num_node = dlistint_len(temp);
	if (idx > (num_node - 1))
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if ((num_node - 1) == idx)
	{
		free(new);
		add_dnodeint_end(&temp, n);
		return (*h);
	}
	else
	{
		for (i = 0 ; i < idx ; i++)
		{
			temp = temp->next;
		}
		new->n = n;
		temp->prev->next = new;
		new->next = temp;
		new->prev = temp->prev;
	}
	return (new);
}
