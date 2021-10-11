#include "lists.h"
/**
 * free_listint2 - frees a int list
 * @head: head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
	{
		return;
	}
	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
