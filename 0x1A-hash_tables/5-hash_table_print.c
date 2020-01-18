#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht : hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	int i = 0;
	int state = 0;

	if (ht != NULL)
	{
		printf("{");
		while (i <= 1024)
		{
			if (ht->array[i] != NULL)
			{
				temp = ht->array[i];
				if (state == 1)
					printf(", ");
				while (temp)
				{
					printf("'%s': '%s'", temp->key, temp->value);
					if (temp->next != NULL)
						printf(", ");
					temp = temp->next;
				}
				state = 1;
			}
			i++;
		}
	}
	printf("}\n");
}
