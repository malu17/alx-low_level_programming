#include "main.h"

/**
 * print_binary - convert int to binary and prints it out.
 *
 * @n: pointer to a string.
 *
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	int i, j;
	int flag = 0;

	if (n == 0)
		_putchar('0');
	for (i = 63; i >= 0; i--)
	{
		j = n >> i;
		if (j & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else
		{
			if (flag == 1)
				_putchar('0');
		}
	}
}
