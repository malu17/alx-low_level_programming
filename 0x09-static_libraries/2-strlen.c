#include "main.h"

/**
 * _strlen - determins the length of a string.
 * @s: accepts address of the passed argument, its a pointer.
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
