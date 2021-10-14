#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: ptr to int
 * @index: index
 * Return: value bit in index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = *n | 1 << index;
	return (1);
}
