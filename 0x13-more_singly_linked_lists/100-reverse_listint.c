#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list.
* @head : pointer
* Return: pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *q;

	if (*head == NULL)
		return (NULL);
	p = *head;
	q = p->next;

	if (q == NULL)
		return (*head);
	q = reverse_listint(&q);
	p->next->next = p;
	p->next = NULL;
	*head = q;
	return (*head);
}
