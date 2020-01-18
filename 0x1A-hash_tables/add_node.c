#include "hash_tables.h"

/**
* add_node - function that adds a new node
* @head: pointer double
* @str: data add
* Return: the address of the new element, or NULL if it failed
*/

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);

	new->value = strdup(value);
	new->key = strdup(key);
	new->next = *head;
	*head = new;
	return (*head);
}
