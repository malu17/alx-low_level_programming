#include "main.h"
/**
 * *cap_string - captialize a string
 * @s: string
 *
 * Return: the string capitalized
 **/
char *cap_string(char *s)
{
	char separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int i, j;

	for (i = 0; s[i] != 00; i++)
	{
		for (j = 0; separators[j] != 00; j++)
		{
			if (s[i] == separators[j])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
			else if (i == 0)
			{
				if (s[i] >= 97 && s[i] <= 122)
				{
					s[i] = s[i] - 32;
				}
			}
		}
	}
	return (s);
}
