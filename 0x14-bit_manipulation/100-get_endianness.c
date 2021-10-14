#include "holberton.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 1 for little endian, 0 for big endian
 */
int get_endianness(void)
{
	int var = 1;
	char *c = (char *)&var;

	if (*c != 00)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
