#include "hash_tables.h"

/**
 * shash_table_create - function that creates an ordered hash table.
 * @size: size of the hash table
 * Return: pointer to the table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;

	if (size == 0)
		return (NULL);

	new_table = calloc(1, sizeof(shash_table_t));
	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;
	new_table->array = calloc(size, sizeof(shash_node_t *));

	if (!new_table->array)
		return (NULL);

	return (new_table);
}

/**
 * shash_table_set - function that adds an element to the ordered hash table.
 * @ht: pointer to the hash table structure
 * @key: string to be looked for
 * @value: value of the data
 * Return: 1 on success or 0 on error
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *temp;

	if (!ht || !key || !*key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp)
	{
		if (!strcmp(temp->key, key))
		{
			free(temp->value);
			temp->value = calloc(strlen(value) + 1, sizeof(char));
			if (!temp->value)
				return (0);
			strcpy(temp->value, value);
			return (1);
		}
		temp = temp->next;
	}
	new_node = alloc_new_node(strlen(key), strlen(value));
	if (!new_node)
		return (0);
	strcpy(new_node->key, key), strcpy(new_node->value, value);

	if (!ht->array[index])
		ht->array[index] = new_node;
	else
	{
		new_node->next = ht->array[index], ht->array[index] = new_node;
	}
	set_sorted_l(ht, new_node, key);
	return (1);
}
/**
 * set_sorted_l - function that sets the node in the sorted list
 * @ht: pointer to the hash table
 * @new_node: pointer to the node to add
 * @key: key for the sorting
 * Return: void
 */

void set_sorted_l(shash_table_t *ht, shash_node_t *new_node, const char *key)
{
	shash_node_t *temp;
	unsigned int i = 0, flag = 0;

	if (!ht->shead)
	{
		ht->shead = new_node, ht->stail = new_node;
	}
	else
	{
		for (temp = ht->shead; temp; temp = temp->snext)
		{
			for (i = 0, flag = 0; key[i]; i++)
			{
				if (!temp->key[i] || (key[i] == temp->key[i]))
					continue;
				else if (key[i] < temp->key[i])
				{
					new_node->sprev = temp->sprev;
					new_node->snext = temp;
					if (temp->sprev)
						temp->sprev->snext = new_node;
					temp->sprev = new_node, flag++;
					break;
				}
				else
					break;
			}
			if (flag)
				break;
		}
		if (ht->shead->sprev)
			ht->shead = new_node;
		if (ht->stail->snext)
			ht->stail = new_node;
		if (!temp)
		{
			ht->stail->snext = new_node;
			new_node->sprev = ht->stail, ht->stail = new_node;
		}
	}
}

/**
 * alloc_new_node - function that allocates a new node
 * @length_key: length of key for the node
 * @length_val: length of value of the new data in the node
 * Return: pointer to the new node
 */

shash_node_t *alloc_new_node(size_t length_key, size_t length_val)
{
	shash_node_t *new_node;

	new_node = calloc(1, sizeof(shash_node_t));
	if (!new_node)
		return (NULL);
	new_node->key = calloc(length_key + 1, 1);
	if (!new_node->key)
		return (NULL);
	new_node->value = calloc(length_val + 1, 1);
	if (!new_node->value)
		return (NULL);
	new_node->next = NULL;
	new_node->sprev = NULL;
	new_node->snext = NULL;

	return (new_node);
}

/**
 * shash_table_get - function that adds an element to the ordered hash table.
 * @ht: pointer to the hash table structure
 * @key: string to be looked for
 * Return: pointer to the value string
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		temp = ht->array[index];
		while (temp)
		{
			if (!strcmp(temp->key, key))
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}

/**
 * shash_table_print - function that prints the whole hash table, pythonic way
 * @ht: pointer to the hash table structure
 * Return: pointer to the value string
 */

void shash_table_print(const shash_table_t *ht)
{
	unsigned long int count = 0;
	shash_node_t *temp;

	if (!ht)
		return;

	printf("{");
	for (temp = ht->shead; temp; temp = temp->snext)
	{
		if (count)
			printf(", ");
		printf("\'%s\': \'%s\'", temp->key, temp->value);
		count++;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - function that prints in reverse the hash table.
 * @ht: pointer to the hash table structure
 * Return: pointer to the value string
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int count = 0;
	shash_node_t *temp;

	if (!ht)
		return;

	printf("{");
	for (temp = ht->stail; temp; temp = temp->sprev)
	{
		if (count)
			printf(", ");
		printf("\'%s\': \'%s\'", temp->key, temp->value);
		count++;
	}
	printf("}\n");
}

/**
 * shash_table_delete - function that deletes the whole hash table.
 * @ht: pointer to the hash table structure
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp, *current;
	unsigned long int index;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp)
		{
			current = temp->next;
			free(temp->key), free(temp->value);
			free(temp);
			temp = current;
		}
	}
	free(ht->array);
	free(ht);
}
