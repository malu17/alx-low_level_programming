#include "main.h"

/**
 * _abs - gives absolute value of a given number
 * @n: peram accepts any int data type.
 * Return: Always 0 (sucsess).
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
