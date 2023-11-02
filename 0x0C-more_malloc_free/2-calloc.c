#include "main.h"

/**
 * _calloc - Function that allocates memory for an array, using malloc
 * @nmemb: Number of elements
 * @size: Byte size of each array element
 * Return: Pointer to allocated memory else NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(size * nmemb);
	if (memory == NULL)
		return (NULL);
	filler = memory;
	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';
	return (memory);
}
