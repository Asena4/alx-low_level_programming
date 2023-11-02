#include "main.h"

/**
 **malloc_checked - Allocates memory using malloc
 *@b: Number of bytes to be allocated
 *Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
	{
		exit(98);
	}
	return (memory);
}
