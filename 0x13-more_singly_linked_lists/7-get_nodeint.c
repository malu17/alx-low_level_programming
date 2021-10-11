#include "lists.h"
/**
 * get_nodeint_at_index - get node
 * @head: head
 * @index: index list
 * Return: node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (index == 0 && head != NULL)
	{
		return (head);
	}
	if (index != 0 && head != NULL)
	{
		return (get_nodeint_at_index(head->next, index - 1));
	}
	return (NULL);
}
