#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - function that run another function
* @array: array with elements to print
* @size: size of the array
* @action: pointer to function
*
* Return: nothing.
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != 00 && action != 00)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
