#include "lists.h"
/**
 * listint_len - get number of elements
 * @h: elements
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int back;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		back = 1 + listint_len(h->next);
		return (back);
	}
}
