#include "function_pointers.h"
#include <stdio.h>

/**
 *array_iterator - executes function on each element of an array
 *@array: the array
 *@size: array size
 *@action: perform on each element of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
