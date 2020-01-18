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

	new->value = strdup(value);
	new->key = strdup(key);
	new->next = *head;
	*head = new;
	return (*head);
}


/**
* hash_table_set - function that adds an element to the hash table.
* @ht : is the hash table you want to add or update the key/value to
* @key : is the key. key can not be an empty string
* @value : is the value associated with the key.
* Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int val_index = 0;

	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);
	if (value == NULL)
		return (0);

	val_index = key_index((unsigned char *)key, ht->size);
	ht->array[val_index] = add_node(&ht->array[val_index], key, value);
	if (ht->array[val_index] == NULL)
		return (0);
	return (1);
}
