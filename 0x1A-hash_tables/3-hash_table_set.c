#include "hash_tables.h"

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
	return (1);
}
