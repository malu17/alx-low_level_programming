#include "lists.h"

/**
 * _strlen - determins the length of a string.
 * @s: accepts address of the passed argument, its a pointer.
 * Return: the length of a string.
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *add_node_end - adds a new_end_node node at the end of a list_t list.
 *
 * @head: pointer to a struct called list_t.
 * @str: ptr string.
 * Return: NULL or a ptr to head to List_t.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end_node;
	list_t *current_end_node = *head;

	new_end_node = malloc(sizeof(list_t));

	if (new_end_node == NULL)
	{
		free(new_end_node);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_end_node;
	}
	else
	{
		while (current_end_node->next != NULL)
			current_end_node = current_end_node->next;
		current_end_node->next = new_end_node;
	}

	if (str == NULL)
	{
		new_end_node->str = 0;
		new_end_node->len = 0;
	}
	else
	{
		new_end_node->str = strdup(str);
		new_end_node->len = _strlen(str);
	}
	new_end_node->next = NULL;
	return (new_end_node);
}
