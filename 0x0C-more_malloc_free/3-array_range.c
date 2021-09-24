#include "main.h"

/**
 * array_range -  creates an array of integers.
 *@min: int
 *@max: int
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int i;
	int j;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	j = ((max - min) + 1);
	ptr = malloc((sizeof(int)) * j);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
