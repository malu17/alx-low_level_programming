#include "main.h"

/**
 * _isalpha - checks a given argumet either is alpha or not..
 * @c: peram accepts any int data type.
 * Return: Always 0 (sucsess).
 */
int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
