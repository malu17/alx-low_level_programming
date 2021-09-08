#include "main.h"
#include <stdio.h>
/**
* *_strcat - concatenate two strings
* @src: string one
* @dest: string two, at the end both strings will save there
* Return: dest
**/
char *_strcat(char *dest, char *src)
{
	int i, j, l;

	for (i = 0; dest[i] != 00; i++)
	{
	}
	for (j = 0; src[j] != 00; j++)
	{
	}
	for (l = 0; l < j; l++)
	{
	dest[i + l] = src[l];
	}
	return (dest);
}
