#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht : hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *temp;
	hash_node_t *node_free;

	if (ht != NULL)
	{
		while (i <= ht->size)
		{
			if (ht->array[i] != NULL)
			{
				temp = ht->array[i];
				while (temp)
				{
					node_free = temp;
					temp = temp->next;
					free(node_free->key);
					free(node_free->value);
					free(node_free);
				}
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
