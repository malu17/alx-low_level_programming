#include "main.h"

/**
 * _isupper - check and identify if a given char in upper case or not
 * @c: accepts value of a char.
 * Return: 1 if upper and 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
