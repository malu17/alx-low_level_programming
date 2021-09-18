#include "main.h"

/**
 * _islower - checks a given argumet either its lower case or not.
 * @c: peram accepts any int data type.
 * Return: Always 0 (sucsess).
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
