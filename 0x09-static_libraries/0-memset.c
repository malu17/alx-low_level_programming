#include "main.h"

/**
 * *_memset - fills the first n bytes of the memory area pointed by s
 *	with the constant byte b.
 * @s: pointer
 * @b: the constant that will be replaced upto n byte.
 * @n: number of byte the constant will replace.
 *
 * Return: a pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
