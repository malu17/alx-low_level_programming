#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc.
 * @b: size of the returned pointer.
 *
 * Return: a pointer or 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
