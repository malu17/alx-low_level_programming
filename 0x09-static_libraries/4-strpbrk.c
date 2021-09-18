#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: string pointer.
 * @accept: bytes to be checked on s.
 *
 * Return: a pointer  that matches one of the bytes in accept,
 *	or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
