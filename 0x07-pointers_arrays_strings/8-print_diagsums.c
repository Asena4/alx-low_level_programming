#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - the main function
  * @size: function parameter
  * @a: function parameter
  * Return: value is 0
  */
void print_diagsums(int *a, int size)
{
	int ct1;
	int ct2;
	int i;

	ct1 = 0;
	ct2 = 0;

	for (i = 0; i < size; i++)
	{
		ct1 = ct1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		ct2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", ct1, ct2);
}
