#include "hash_tables.h"

/**
  * hash_table_print - a function that prints a hash table
  * @ht: the hash table
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			if (current != NULL)
				printf(", ");
		}
	}
	printf("}\n");
}
