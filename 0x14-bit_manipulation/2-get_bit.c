#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to manipulate.
 * @index: integer
 *
 * Return: 1 or 0 or -1(fail)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
	{
		i = -1;
	}
	else
	{
		if (n & (1 << index))
		{
			i = 1;
		}
		else if (!(n & (1 << index)))
		{
			i = 0;
		}
	}

	return (i);

}
