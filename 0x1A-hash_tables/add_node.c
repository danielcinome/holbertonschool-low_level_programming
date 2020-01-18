#include "hash_tables.h"

/**
* add_node - function that adds a new node
* @head: pointer double
* @key : is the key
* @value : value
* Return: the address of the new element, or NULL if it failed
*/

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);

	new->value = _strdup(value);
	new->key = _strdup(key);
	new->next = *head;
	*head = new;
	return (*head);
}
