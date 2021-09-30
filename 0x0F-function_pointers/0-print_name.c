#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a paramete
 * @array: array of functions
 * @size: size of array
 * @action: function to execute
 * Description: executes a function given as a parameter of element of an array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;

for ( ; i < size ; i++)
action(array[i]);

}
