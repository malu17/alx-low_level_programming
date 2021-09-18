#include "main.h"
/**
 * _puts - prints a string to stdout but character wise.
 * @str: pointer which accepts address of a string value.
 * Return: nothing.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
