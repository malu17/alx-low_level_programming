#include "lists.h"
/**
* sum_listint - sum all nodes
* @head: head
* Return: result of sum all
**/
int sum_listint(listint_t *head)
{
	if (head == NULL)
	{
		return (0);
	}
	else
	{
		return (head->n + sum_listint(head->next));
	}
}
