#include "function_pointers.h"
/**
 * print_name - prints a name
 * @bob: string name
 * @f: function pointer to print name
 * Return: void
 */
void print_name(char *bob, void (*f)(char *))
{
	if (bob && f)
		f(bob);
}
