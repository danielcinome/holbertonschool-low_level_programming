#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_node - function that adds a new node
* @head: pointer double
* @str: data add
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	while (str[i] != '\0')
		i++;
	new->len = i;
	new->next = *head;
	*head = new;

	return (*head);
}
