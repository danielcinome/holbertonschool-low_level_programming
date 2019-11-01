#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_list - function that frees a list_t list.
* @head : pointer
*/

void free_list(list_t *head)
{
	list_t *liber;

	liber = head;
	while (head)
	{
		head = head->next;
		free(liber->str);
		free(liber->next);
	}
	free(head);
	free(liber);
}
