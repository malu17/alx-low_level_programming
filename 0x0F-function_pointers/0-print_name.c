#include <stdio.h>
/**
* print_name - prints a name
* @name: name to print
* @f: pointer to function
**/
void print_name(char *name, void (*f)(char *))
{
	if (name != 00 && f != 00)
	{
		f(name);
	}
}
