#include "lists.h"

/**
 * print_list -  returns the number of elements in a linked list_t list.
 *
 * @h: pointer to a struct called list_t
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	int num_of_node = 0;

	while (h != NULL)
	{
		h = h->next;
		num_of_node++;
	}

	return (num_of_node);
}
