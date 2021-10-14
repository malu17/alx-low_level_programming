#include "holberton.h"
/**
 * binary_to_uint - convert a binary to decimal
 * @b: binary number as string
 * Return: Decimal equivalent of *b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int cllbck = 0, ld, j;
	int i = 0;

	if (b == 0)
	{
		return (0);
	}
	for (i = 0; b[i] != 0; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	i = i - 1;

	for (j = 0; i >= 0; j++, i--)
	{
		if (b[i] == '0')
		{
			ld = 0;
		}
		else if (b[i] == '1')
		{
			ld = 1;
		}
		ld = ld << j;
		cllbck = cllbck | ld;
	}
	return (cllbck);
}
