#include "function_pointers.h"

/**
 *int_index - function that searches for an integer
 *@array: array to search from
 *@size: size of elements in array
 *@cmp: pointer to func of one of the 3 in main
 *Return: index of the matched character of -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
