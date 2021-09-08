#include "main.h"
/**
* *_strncat - similar to strncat but copies the n bytes to dest
* @src: source
* @dest: destination
* @n: bytes to copy from src to dest
*
* Return: destinaton with copied bytes.
**/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != 00; i++)
	{
	}
	for (j = 0; j < n && src[j] != 00; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
