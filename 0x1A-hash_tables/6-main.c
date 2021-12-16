#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for alx School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	char *key;
	char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "gennie", "and Jay love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Aster", "Obelix");
	hash_table_set(ht, "Betty", "alx");
	hash_table_set(ht, "98", "Battery Streetz");
	key = strdup("Tim");
	value = strdup("Britton");
	hash_table_set(ht, key, value);
	key[0] = '\0';
	value[0] = '\0';
	free(key);
	free(value);
	hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "hetairas", "gennie");
	hash_table_set(ht, "hetairas", "gennie Z");
	hash_table_set(ht, "mentioner", "gennie");
	hash_table_set(ht, "hetairas", "gennie Z Chu");
	hash_table_print(ht);
	hash_table_delete(ht);
	return (EXIT_SUCCESS);
}
is