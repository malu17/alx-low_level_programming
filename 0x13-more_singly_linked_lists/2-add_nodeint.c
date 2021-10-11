#include "lists.h"
/**
 * add_nodeint - add a new node
 * @head: head of nodes
 * @n: int
 * Return: node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_new;

	add_new = malloc(sizeof(listint_t));
	if (add_new == NULL)
	{
		return (NULL);
	}
	add_new->n = n;
	add_new->next = *head;

	*head = add_new;

	return (add_new);
}
