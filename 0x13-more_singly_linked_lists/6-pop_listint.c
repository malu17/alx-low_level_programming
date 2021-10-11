#include "lists.h"
/**
* pop_listint - delete the head of node
* @head: head
* Return: 0 of list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *guard;
	int g;

	if (*head != NULL)
	{
		guard = (*head)->next;
		g = (*head)->n;
		free(*head);
		*head = guard;
		return (g);
	}
	return (0);
}
