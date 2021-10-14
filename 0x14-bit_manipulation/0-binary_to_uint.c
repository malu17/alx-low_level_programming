#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int.
 *
 * @b: pointer to a string.
 *
 * Return: int or 0(fail)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	unsigned int multiplayer = 1;
	int i, j;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
	}

	for (j = i - 1; j >= 0; j--)
	{
		if (b[j] != '1' && b[j] != '0')
			return (0);

		if (b[j] == '1')
		{
			decimal += multiplayer;
		}

		multiplayer *= 2;
	}

	return (decimal);
}
