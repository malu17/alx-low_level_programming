#include "lists.h"

/**
 * print_list - prints all the elements of  a list_t list.
 *
 * @h: pointer to a struct called list_t
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	unsigned int num_of_node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
		num_of_node++;
	}

	return (num_of_node);
}
