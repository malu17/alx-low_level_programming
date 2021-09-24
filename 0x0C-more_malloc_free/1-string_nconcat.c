#include <stdlib.h>
#include "main.h"
/**
 * _strlen - get length of string.
 * @str: string.
 * Return: length.
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}
/**
 * string_nconcat - concatenates two strings.
 * @s1: strging 1.
 * @s2: string 2.
 * @n: byets of s2 to include.
 * Return: pointer to a string or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;
	str = malloc(len1 + n + 1 * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; ++i)
		str[i] = s1[i];
	for (j = 0; j < n; ++j, ++i)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}
