#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int.
 *
 * @b: pointer to a string.
 *
 * Return: int or 0(fail)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;
	
	if (n & (1 << index))
	{
		return (1);
	}
	else if (!(n & (1 << index)))
	{
		return (0);
	}
	else
	{
		return (-1);	
	}
	
}
