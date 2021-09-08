#include "holberton.h"
/**
 * *rot13 - encode an string into rot13
 * @s: string
 *
 * Return: string encoded
 **/
char *rot13(char *s)
{
	int i, j;
	char src[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char encode[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != 00; i++)
	{
		for (j = 0; src[j] != 00; j++)
		{
			if (s[i] == src[j])
			{
				s[i] = encode[j];
				break;
			}
		}
	}
	return (s);
}
