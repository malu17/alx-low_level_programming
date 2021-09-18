#include "main.h"

/**
 * _strncat - concatinate two strings up to n bytes.
 * @dest: accepts destination string.
 * @src: accepts source string.
 * @n: accepts byte conditon to concatenate the two string.
 * Return: pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
