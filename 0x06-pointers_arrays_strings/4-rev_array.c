#include "main.h"
/**
 * reverse_array - this funcion will reverse an array
 * @a: array elements
 * @n: number of elements
 **/
void reverse_array(int *a, int n)
{
	int i = 0;
	int buf = 0;

	while (i < n - 1)
	{
		buf = a[i];
		a[i] = a[n - 1];
		a[n - 1] = buf;
		i++;
		n--;
	}
}
