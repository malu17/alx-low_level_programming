#include "main.h"

/**
 * _strncpy - copy the content of src to destination upto n byte.
 * @dest: accepts destination string.
 * @src: accepts source string.
 * @n: accepts byte conditon to perform copy operation the two string.
 * Return: pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
