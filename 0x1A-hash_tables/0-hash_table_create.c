#include "hash_tables.h"
/**
 *hash_table_create - creates a hash table
 *@size: size of the hash tables' array
 *Return: pointer to new hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(int));

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	return (hash_table);
}
