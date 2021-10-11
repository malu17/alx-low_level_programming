#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 * @head: head of node
 * @n: n
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_new;

	if ((*head) == NULL)
	{
		add_new = malloc(sizeof(listint_t));
		if (add_new == NULL)
		{
			return (NULL);
		}
		add_new->n = n;
		add_new->next = NULL;

		*head = add_new;

		return (add_new);
	}
	else
	{
		return (add_nodeint_end(&((*head)->next), n));
	}
}
