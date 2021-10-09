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
 * *add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to a struct called list_t.
 * @str: ptr string.
 * Return: NULL or a ptr to head to List_t.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	if (str == NULL)
	{
		new->str = 0;
		new->len = 0;
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = *head;
		*head = new;
		return (new);
	}
	return (NULL);
}
