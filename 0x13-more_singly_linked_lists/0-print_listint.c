#include "lists.h"
/**
 * print_listint - print elements of list
 * @h: elements
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t back;

	for (back = 0; h != NULL; back++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (back);
}
