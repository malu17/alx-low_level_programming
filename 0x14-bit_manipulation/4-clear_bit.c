#include "holberton.h"
/**
 * clear_bit - clean bit
 * @n: ptr to int
 * @index: index
 * Return: 1 if success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int var;

	if (index > 63)
	{
		return (-1);
	}
	else
	{
		var = 1 << index;
		*n &= ~var;
		return (1);
	}
}
