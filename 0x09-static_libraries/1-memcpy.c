#include "main.h"

/**
 * *_memcpy - fills the first n bytes of the memory area pointed by s
 *	with the constant byte b.
 * @dest: pointer
 * @src: the constant that will be replaced upto n byte.
 * @n: number of byte the constant will replace.
 *
 * Return: a pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
