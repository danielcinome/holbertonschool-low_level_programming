#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht : hash table you want to look into
 * @key : key you are looking for
 * Return: NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int val_index = 0;
	hash_node_t *temp;

	val_index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[val_index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
