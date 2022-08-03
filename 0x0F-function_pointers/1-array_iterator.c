#include <stdio.h>
#include "main.h"
/**
 * array_iterator - function that executes
 * a function given as a parameter
 * on each element of an array
 *
 * @array: array with the parameters
 * @size: size of the array
 * @action: function as a parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
