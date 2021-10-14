#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: decimal number
 * @m: decimal number
 *
 * Return: num of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int var = 1;
	unsigned long int i = 0;

	n ^= m;
	while (n != 0)
	{
		if (n & var)
		{
			i++;
		}
		n >>= 1;
	}
	return (i);
}
