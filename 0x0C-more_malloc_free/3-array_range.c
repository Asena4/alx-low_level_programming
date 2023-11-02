#include "main.h"

/**
 * array_range - Function that creates an array of integers
 * @min: First value of array
 * @max: Last value of array
 * Return: Pointer to the newly created array, else NULL
 */
int *array_range(int min, int max)
{
	int *arr, i, size;
	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min++;
	return (arr);
}
